#include <stdio.h>
#include <time.h>
#define max 100

int linear(int arr[], int n, int t) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == t)
            return i; 
    }
    return -1; 
}

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

int main()
{
    int arr[max];
    int n=100;
   readfile("G:/Sem_5/DAA/Arrays/best_case_100.txt", arr, n);

   n = sizeof(arr) /sizeof(arr[0]);
   int t ;

   printf("Enter element to search: ");
    scanf("%d", &t);

    int result = linear(arr, n, t);

    if (result != -1)
        printf("Element %d found at index %d\n", t, result);
    else
        printf("Element %d not found in array\n", t);

    

    
    if (readfile("G:/Sem_5/DAA/Arrays/best_case_10000.txt", arr, n)) {
        clock_t start, end;
        double time_taken;

        start = clock();
        linear(arr, n, 1);
        end = clock();

        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("best_case_10000 took %.3f ms\n", time_taken);
    } else {
        printf("Failed to read the file.\n");
    }

    return 1;
}
