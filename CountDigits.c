#include<stdio.h>

int main()
{
    int num,number,count =0;

    printf("Enter the number: ");
    scanf("%d",&number);
    num = number;

    while (num!=0)
    {
        
        count = count +1;
        num = num / 10;

    }

    printf("The count of number is %d ",count);
    
    return 0;
}