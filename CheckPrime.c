#include<stdio.h>

int main()
{
    int num ,i,flag=1;
    printf("Enter the number: ");
    scanf("%d",&num);

    for ( i = 2; i < num/2; i++)
    {
        if (num%i==0)
        {
            flag=0;
            break;
        }
        
    }
    if(num<=1)
    {
        flag=0;
    }
    else if(num==2)
    {
        flag=1;
    }

    if (flag==1)
    {
        printf("%d is prime number",num);
    }
    else
    {
        printf("%d is not prime number",num);
    }
    return 0;
    
}