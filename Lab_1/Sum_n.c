// Online C compiler to run C program online
#include<stdio.h>
int main(){
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int ans =0;
    for (int i=0;i<=n;i++){
        ans+=i;
    }
    printf("%d",ans);
    return 0;
}


