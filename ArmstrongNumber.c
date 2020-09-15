#include<stdio.h>
#include<math.h>

int main()
{
    int n=0,num,original,remainder,result;

    printf("Enter an integer: ");
    scanf("%d",&num);

    //store the number of digits of num in n

    for(original=num;original!=0;n++)
    {
        original/=10;
    }

    for(original=num;original!=0;original/=10)
    {
        remainder=original%10;

        result=result+pow(remainder,n);
    }

    if(result==num)
    {
        printf("%d is an armstrong number",num);
    }
    else
    {
        printf("%d is not an armstrong number",num);

    }
    return 0;
    
}