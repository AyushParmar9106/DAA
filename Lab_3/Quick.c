#include <stdio.h>
#include <time.h>

#define N 10000

// Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // Place pivot at the correct position
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int pi = i + 1;

        // Recursive calls
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to read array from file
int readArrayFromFile(const char *filename, int arr[], int n) {
    FILE *f = fopen(filename, "r");
    if (!f) {
        printf("Cannot open file: %s\n", filename);
        return 0;
    }

    for (int i = 0; i < n; i++) {
        fscanf(f, "%d", &arr[i]);
    }

    fclose(f);
    return 1;
}

// Main function to test quick sort with best, average, and worst cases
int main() {
    int arr[N];
    clock_t start, end;
    double time_taken;

    // Best Case
    if (readArrayFromFile("G:/Sem_5/DAA/Arrays/best_case_100.txt", arr, N)) {
        start = clock();
        quickSort(arr, 0, N - 1);  // Corrected call
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("Best Case Time: %f ms\n", time_taken);
    }

    // Average Case
    if (readArrayFromFile("G:/Sem_5/DAA/Arrays/average_case_100.txt", arr, N)) {
        start = clock();
        quickSort(arr, 0, N - 1);  // Corrected call
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("Average Case Time: %f ms\n", time_taken);
    }

    // Worst Case
    if (readArrayFromFile("G:/Sem_5/DAA/Arrays/worst_case_100.txt", arr, N)) {
        start = clock();
        quickSort(arr, 0, N - 1);  // Corrected call
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("Worst Case Time: %f ms\n", time_taken);
    }

        // Best Case
    if (readArrayFromFile("G:/Sem_5/DAA/Arrays/best_case_1000.txt", arr, N)) {
        start = clock();
        quickSort(arr, 0, N - 1);  // Corrected call
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("Best Case Time: %f ms\n", time_taken);
    }

    // Average Case
    if (readArrayFromFile("G:/Sem_5/DAA/Arrays/average_case_1000.txt", arr, N)) {
        start = clock();
        quickSort(arr, 0, N - 1);  // Corrected call
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("Average Case Time: %f ms\n", time_taken);
    }

    // Worst Case
    if (readArrayFromFile("G:/Sem_5/DAA/Arrays/worst_case_1000.txt", arr, N)) {
        start = clock();
        quickSort(arr, 0, N - 1);  // Corrected call
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("Worst Case Time: %f ms\n", time_taken);
    }

    // Best Case
    if (readArrayFromFile("G:/Sem_5/DAA/Arrays/best_case_10000.txt", arr, N)) {
        start = clock();
        quickSort(arr, 0, N - 1);  // Corrected call
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("Best Case Time: %f ms\n", time_taken);
    }

    // Average Case
    if (readArrayFromFile("G:/Sem_5/DAA/Arrays/average_case_10000.txt", arr, N)) {
        start = clock();
        quickSort(arr, 0, N - 1);  // Corrected call
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("Average Case Time: %f ms\n", time_taken);
    }

    // Worst Case
    if (readArrayFromFile("G:/Sem_5/DAA/Arrays/worst_case_10000.txt", arr, N)) {
        start = clock();
        quickSort(arr, 0, N - 1);  // Corrected call
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("Worst Case Time: %f ms\n", time_taken);
    }


    return 0;
}
