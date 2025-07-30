// Online C compiler to run C program online
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans *= i;
    }
    printf("%d",ans);
    return 0;
}

