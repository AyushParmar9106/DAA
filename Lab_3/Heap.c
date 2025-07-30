#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void heapify(int arr[], int n, int i) {
    int largest = i;       
    int left = 2 * i + 1;   
    int right = 2 * i + 2;  

  
    if (left < n && arr[left] > arr[largest])
        largest = left;

    
    if (right < n && arr[right] > arr[largest])
        largest = right;

  
    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    int i;


    for (i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

  
    for (i = n - 1; i > 0; i--) {
       
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

  
        heapify(arr, i, 0);
    }

    return;
}



void main() {
    int arr[MAX];
    int n = 100;  

    printf("for 100 element\n");

    // Best
    // FILE *filename1 = "F:/Sem_5/DAA/best_case_100.txt";

    if (readfile("F:/Sem_5/DAA/Arrays/best_case_100.txt", arr, n)) {
        clock_t start, end;
        double time_taken;

        start = clock();
        heapSort(arr, n);
        end = clock();

        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("best_case_100 took %.3f ms\n", time_taken);
    } else {
        printf("Failed to read the file.\n");
    }

    // Average 
    // FILE *filename2 = "F:/Sem_5/DAA/Arrays/average_case_100.txt";

    if (readfile("F:/Sem_5/DAA/Arrays/average_case_100.txt", arr, n)) {
        clock_t start, end;
        double time_taken;

        start = clock();
        heapSort(arr, n);
        end = clock();

        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("average_case_100 took %.3f ms\n", time_taken);
    } else {
        printf("Failed to read the file.\n");
    }
    
    // Worst
    // FILE *filename3 = "F:/Sem_5/DAA/Arrays/worst_case_100.txt";

    if (readfile("F:/Sem_5/DAA/Arrays/worst_case_100.txt", arr, n)) {
        clock_t start, end;
        double time_taken;

        start = clock();
        heapSort(arr, n);
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

    if (readfile("F:/Sem_5/DAA/Arrays/best_case_1000.txt", arr, n)) {
        clock_t start, end;
        double time_taken;

        start = clock();
        heapSort(arr, n);
        end = clock();

        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("best_case_1000 took %.3f ms\n", time_taken);
    } else {
        printf("Failed to read the file.\n");
    }

    // Average 
    // FILE *filename2 = "F:/Sem_5/DAA/Arrays/average_case_100.txt";

    if (readfile("F:/Sem_5/DAA/Arrays/average_case_1000.txt", arr, n)) {
        clock_t start, end;
        double time_taken;

        start = clock();
        heapSort(arr, n);
        end = clock();

        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("average_case_1000 took %.3f ms\n", time_taken);
    } else {
        printf("Failed to read the file.\n");
    }
    
    // Worst
    // FILE *filename3 = "F:/Sem_5/DAA/Arrays/worst_case_100.txt";

    if (readfile("F:/Sem_5/DAA/Arrays/worst_case_1000.txt", arr, n)) {
        clock_t start, end;
        double time_taken;

        start = clock();
        heapSort(arr, n);
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

    if (readfile("F:/Sem_5/DAA/Arrays/best_case_10000.txt", arr, n)) {
        clock_t start, end;
        double time_taken;

        start = clock();
        heapSort(arr, n);
        end = clock();

        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("best_case_10000 took %.3f ms\n", time_taken);
    } else {
        printf("Failed to read the file.\n");
    }

    // Average 
    // FILE *filename2 = "F:/Sem_5/DAA/Arrays/average_case_100.txt";

    if (readfile("F:/Sem_5/DAA/Arrays/average_case_10000.txt", arr, n)) {
        clock_t start, end;
        double time_taken;

        start = clock();
        heapSort(arr, n);
        end = clock();

        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("average_case_10000 took %.3f ms\n", time_taken);
    } else {
        printf("Failed to read the file.\n");
    }
    
    // Worst
    // FILE *filename3 = "F:/Sem_5/DAA/Arrays/worst_case_100.txt";

    if (readfile("F:/Sem_5/DAA/Arrays/worst_case_10000.txt", arr, n)) {
        clock_t start, end;
        double time_taken;

        start = clock();
        heapSort(arr, n);
        end = clock();

        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("worst_case_10000 took %.3f ms\n", time_taken);
    } else {
        printf("Failed to read the file.\n");
    }

   
}








