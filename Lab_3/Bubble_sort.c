#include<stdio.h>
#include<time.h>

#define N 100

void bubbleSort(int arr[],int n){
	//int n = sizeof(arr)/sizeof(arr[0]);
	
	int i,j,exchange;
	for(i=0;i<n-1;i++){
		exchange = 0;
		for(j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				exchange = 1;
			}
		}
		if(exchange==0){
			break;
		}
	}
}
int readArrayFromFile(const char *filename,int arr[],int n){
	FILE *f = fopen(filename,"r");
	if(!f){
		printf("cannot open file %s\n",filename);
		return 0;
	}
	
	int i;
	for(i=0;i<n;i++){
		fscanf(f,"%d",&arr[i]);
	}
	fclose(f);
	return 1;
}


int main()
{
    int arr[N];
    clock_t start,end;
    double time_taken;

    //best case
    if(readArrayFromFile("G:/Sem 5/DAA/Arrays/best_case_100.txt",arr,N))
    {
        start = clock();
        insertionsort(arr,N);
        end = clock();
        time_taken = ((double)(end - start))/ CLOCKS_PER_SEC * 1000;
        printf("Best case Time: %f ms\n",time_taken);
    }

    //Average case 
    if(readArrayFromFile("G:/Sem 5/DAA/Arrays/average_case_100.txt",arr,N))
    {
        start = clock();
        insertionsort(arr,N);
        end = clock();
        time_taken = ((double)(end - start))/ CLOCKS_PER_SEC * 1000;
        printf("Average case Time: %f ms\n",time_taken);
    }

    //Worst case 
    if(readArrayFromFile("G:/Sem 5/DAA/Arrays/worst_case_100.txt",arr,N))
    {
        start = clock();
        insertionsort(arr,N);
        end = clock();
        time_taken = ((double)(end - start))/ CLOCKS_PER_SEC * 1000;
        printf("worst case Time: %f ms\n",time_taken);
    }

    //best case
    if(readArrayFromFile("G:/Sem 5/DAA/Arrays/best_case_1000.txt",arr,N))
    {
        start = clock();
        insertionsort(arr,N);
        end = clock();
        time_taken = ((double)(end - start))/ CLOCKS_PER_SEC * 1000;
        printf("Best case Time: %f ms\n",time_taken);
    }

    //Average case 
    if(readArrayFromFile("G:/Sem 5/DAA/Arrays/average_case_1000.txt",arr,N))
    {
        start = clock();
        insertionsort(arr,N);
        end = clock();
        time_taken = ((double)(end - start))/ CLOCKS_PER_SEC * 1000;
        printf("Average case Time: %f ms\n",time_taken);
    }

    //Worst case 
    if(readArrayFromFile("G:/Sem 5/DAA/Arrays/worst_case_1000.txt",arr,N))
    {
        start = clock();
        insertionsort(arr,N);
        end = clock();
        time_taken = ((double)(end - start))/ CLOCKS_PER_SEC * 1000;
        printf("worst case Time: %f ms\n",time_taken);
    }

    //best case
    if(readArrayFromFile("G:/Sem 5/DAA/Arrays/best_case_10000.txt",arr,N))
    {
        start = clock();
        insertionsort(arr,N);
        end = clock();
        time_taken = ((double)(end - start))/ CLOCKS_PER_SEC * 1000;
        printf("Best case Time: %f ms\n",time_taken);
    }

    //Average case 
    if(readArrayFromFile("G:/Sem 5/DAA/Arrays/average_case_10000.txt",arr,N))
    {
        start = clock();
        insertionsort(arr,N);
        end = clock();
        time_taken = ((double)(end - start))/ CLOCKS_PER_SEC * 1000;
        printf("Average case Time: %f ms\n",time_taken);
    }

    //Worst case 
    if(readArrayFromFile("G:/Sem 5/DAA/Arrays/worst_case_10000.txt",arr,N))
    {
        start = clock();
        insertionsort(arr,N);
        end = clock();
        time_taken = ((double)(end - start))/ CLOCKS_PER_SEC * 1000;
        printf("worst case Time: %f ms\n",time_taken);
    }

}