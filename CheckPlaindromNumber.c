#include<stdio.h>

int main()
{
    int n,original,reverse,remainder;

    printf("Enter the number: ");
    scanf("%d",&n);
    original=n;

    while(n!=0)
    {
        remainder = n%10;
        reverse = reverse *10 + remainder;
        n = n/10;

    }

    if(reverse==original)
    {
        printf("%d is a palindrom number",original);
    }
    else
    {
        printf("%d is not a palindrom number",original);
    }
    return 0;

}
