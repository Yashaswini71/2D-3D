#include <stdio.h>
#define ROWS 2
#define COL 3
int main()
{
    int a[ROWS][COL]={10,20,30,40,50,60};// Method-1
    //int b[ROWS][COL]={{100,200,300},{400,500,600}}; // Method-2
    int b[ROWS][COL];
int i,j;
    printf("%d\n",a[0][1]);//Accessing 0th row 1st column
    printf("%d\n",a[1][0]);// Accessing 1st row 0th column
    printf("%d\n",b[0][1]);//Accessing 0th row 1st column
    printf("Elements in an array1: \n");
    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COL;j++)
        {
           // printf("Address of a[%d][%d]: %p\tValue is: %d\n",i,j,&a[i][j],a[i][j]);
            printf("%d ",a[i][j]);
        }
        //printf("\n");
    }
    printf("Base Address of array1: %p\t Address of first element: %p\n",a,&a[0][0]);
    printf("\n");
    printf("Elements in an array2: \n");
    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COL;j++)
        scanf("%d",&b[i][j]);
        
    }
 for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COL;j++)
            printf("Address of a[%d][%d]: %p\tValue is: %d\n",i,j,&b[i][j],b[i][j]);
    }
    printf("\n");
    for(i=0;i<ROWS;i++)
    printf("%p\n",&b[i]);
    return 0;
}
