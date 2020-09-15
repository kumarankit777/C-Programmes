#include<stdio.h>

int main()
{
    int remainder,num,number,i,sum=0,fact=1;
    printf("Enter the number: ");
    scanf("%d",&num);

    number = num;

    while(number!=0)
    {
        remainder = number%10;
        for(i=1;i<=remainder;i++)
        {
            fact = fact * i;
        }
        number = number/10;
        sum = sum + fact;
        fact = 1;
       

    }

    if (sum == num)
    {
        printf("%d is a strong number",num);
    }
    else
    {
        printf("%d is not a strong number",num);
    }
    return 0;
    
    
    
}