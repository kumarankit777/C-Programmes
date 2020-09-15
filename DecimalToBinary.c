#include<stdio.h>

int main()
{
    int n,j,arr[10];

    printf("Enter the number: ");
    scanf("%d",&n);

    int i =0;
    while (n>0)
    {
        arr[i] = n % 2;
        n = n/2;
        i++;
    }
    printf("\n Binary of gibven number is: ");

    for(j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
    return 0;

    
}