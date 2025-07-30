#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int a = 1; a <= n; a++)
    {
        int ans = 0;
        for(int i = 1; i <= a; i++)
        {
            ans += i;
        }
        printf("Sum of first %d natural numbers is: %d\n", a, ans);
    }
}
