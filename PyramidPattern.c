#include<stdio.h>

int main()
{
    int row,totalRowNo,space,star;

    printf("Enter no of rows: ");
    scanf("%d",&totalRowNo);

    for(row=1;row<=totalRowNo;row++)
    {
        //printing spaces
        for(space=1;space<=(totalRowNo-row);space++)
        {
            printf(" ");
        }
        //printing star
        for ( star = 1; star <=((2*row)-1); star++)
        {
            printf("*");
        }

        printf("\n");

        
    }
    return 0;

    
}