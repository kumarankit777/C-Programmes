#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d ",&a,&b);

    printf("GCD of %d and %d is %d: ",a,b,gcd(a,b));
    return 0;
}

int gcd(int a,int b)
{
    if(a==0)
        return b;
    
    return gcd(b % a,a);
    

    
}