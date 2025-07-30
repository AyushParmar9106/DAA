#include <stdio.h>
#include <stdlib.h>

#define V 5   
#define E 5   

struct Edge {
    int src, dest, weight;
};

int compareEdges(const void* a, const void* b) {
    struct Edge* e1 = (struct Edge*)a;
    struct Edge* e2 = (struct Edge*)b;
    return e1->weight - e2->weight;
}

int find(int parent[], int u) {
    if (parent[u] != u)
        parent[u] = find(parent, parent[u]);
    return parent[u];
}

void unionSets(int parent[], int u, int v) {
    int setU = find(parent, u);
    int setV = find(parent, v);
    parent[setU] = setV;
}

int main() {
    struct Edge graph[E] = {
        {0, 1, 6},
        {0, 2, 5},
        {0, 3, 10},
        {2, 3, 6},
        {2, 4, 4}
    };

   
    qsort(graph, E, sizeof(struct Edge), compareEdges);

    int parent[V];
    for (int i = 0; i < V; i++)
        parent[i] = i;

    struct Edge mst[E]; 
    int mstIndex = 0;
    int totalWeight = 0;

    for (int i = 0; i < E; i++) {
        int u = find(parent, graph[i].src);
        int v = find(parent, graph[i].dest);

        if (u != v) {
            mst[mstIndex++] = graph[i];
            unionSets(parent, u, v);
            totalWeight += graph[i].weight;
        }
    }

    printf("Edges in the Minimum Spanning Tree:\n");
    for (int i = 0; i < mstIndex; i++) {
        printf("%d - %d : %d\n", mst[i].src, mst[i].dest, mst[i].weight);
    }

    printf("Total weight of the Minimum Spanning Tree: %d\n", totalWeight);
    return 0;
}