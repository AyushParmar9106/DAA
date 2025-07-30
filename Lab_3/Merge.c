#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Math.h>

#define MAX 10000  



int readfile(const char *filename, int arr[], int n) {
    FILE *f = fopen(filename, "r");
    if (!f) {
        printf("Cannot open the file %s\n", filename);
        return 0;
    }

    for (int i = 0; i < n && fscanf(f, "%d", &arr[i]) == 1; i++);
    fclose(f);
    return 1;
}


void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1) {
        arr[k++] = L[i++];
    }
    while (j < n2) {
        arr[k++] = R[j++];
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}



void main() {
    int arr[MAX];
    int n = 100;  

    printf("for 100 element\n");

    // Best
    // FILE *filename1 = "F:/Sem_5/DAA/best_case_100.txt";

    if (readfile("G:/Sem_5/DAA/Arrays/best_case_100.txt", arr, n)) {
        clock_t start, end;
        double time_taken;

        start = clock();
        MergeSort(arr,0,n);
        end = clock();

        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("best_case_100 took %.3f ms\n", time_taken);
    } else {
        printf("Failed to read the file.\n");
    }

    // Average 
    // FILE *filename2 = "F:/Sem_5/DAA/Arrays/average_case_100.txt";

    if (readfile("G:/Sem_5/DAA/Arrays/average_case_100.txt", arr, n)) {
        clock_t start, end;
        double time_taken;

        start = clock();
        MergeSort(arr,0,n);
        end = clock();

        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("average_case_100 took %.3f ms\n", time_taken);
    } else {
        printf("Failed to read the file.\n");
    }
    
    // Worst
    // FILE *filename3 = "F:/Sem_5/DAA/Arrays/worst_case_100.txt";

    if (readfile("G:/Sem_5/DAA/Arrays/worst_case_100.txt", arr, n)) {
        clock_t start, end;
        double time_taken;

        start = clock();
        MergeSort(arr,0,n);
        end = clock();

        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("worst_case_100 took %.3f ms\n", time_taken);
    } else {
        printf("Failed to read the file.\n");
    }

    arr[1000];
    n = 1000;
    printf("for 1000 element\n");

    // Best
    // FILE *filename1 = "F:/Sem_5/DAA/best_case_100.txt";

    if (readfile("G:/Sem_5/DAA/Arrays/best_case_1000.txt", arr, n)) {
        clock_t start, end;
        double time_taken;

        start = clock();
       MergeSort(arr,0,n);
        end = clock();

        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("best_case_1000 took %.3f ms\n", time_taken);
    } else {
        printf("Failed to read the file.\n");
    }

    // Average 
    // FILE *filename2 = "F:/Sem_5/DAA/Arrays/average_case_100.txt";

    if (readfile("G:/Sem_5/DAA/Arrays/average_case_1000.txt", arr, n)) {
        clock_t start, end;
        double time_taken;

        start = clock();
       MergeSort(arr,0,n);
        end = clock();

        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("average_case_1000 took %.3f ms\n", time_taken);
    } else {
        printf("Failed to read the file.\n");
    }
    
    // Worst
    // FILE *filename3 = "F:/Sem_5/DAA/Arrays/worst_case_100.txt";

    if (readfile("G:/Sem_5/DAA/Arrays/worst_case_1000.txt", arr, n)) {
        clock_t start, end;
        double time_taken;

        start = clock();
       MergeSort(arr,0,n);
        end = clock();

        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("worst_case_1000 took %.3f ms\n", time_taken);
    } else {
        printf("Failed to read the file.\n");
    }

    arr[10000];
    n = 10000;
    printf("for 10000 element\n");

    // Best
    // FILE *filename1 = "F:/Sem_5/DAA/best_case_100.txt";

    if (readfile("G:/Sem_5/DAA/Arrays/best_case_10000.txt", arr, n)) {
        clock_t start, end;
        double time_taken;

        start = clock();
        MergeSort(arr,0,n);
        end = clock();

        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("best_case_10000 took %.3f ms\n", time_taken);
    } else {
        printf("Failed to read the file.\n");
    }

    // Average 
    // FILE *filename2 = "F:/Sem_5/DAA/Arrays/average_case_100.txt";

    if (readfile("G:/Sem_5/DAA/Arrays/average_case_10000.txt", arr, n)) {
        clock_t start, end;
        double time_taken;

        start = clock();
        MergeSort(arr,0,n);
        end = clock();

        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("average_case_10000 took %.3f ms\n", time_taken);
    } else {
        printf("Failed to read the file.\n");
    }
    
    // Worst
    // FILE *filename3 = "F:/Sem_5/DAA/Arrays/worst_case_100.txt";

    if (readfile("G:/Sem_5/DAA/Arrays/worst_case_10000.txt", arr, n)) {
        clock_t start, end;
        double time_taken;

        start = clock();
       MergeSort(arr,0,n);
        end = clock();

        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("worst_case_10000 took %.3f ms\n", time_taken);
    } else {
        printf("Failed to read the file.\n");
    }

   
}








