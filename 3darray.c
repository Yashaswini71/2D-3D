#include <stdio.h>
#define rows 2
#define col 2
#define num 2
int main()
{
    
    
    int b[rows][col][num];
int i,j,k;
   
    printf("Base Address of b: %p\t Address of first element: %p\n",b,&b[0][0][0]);
    printf("\n");
    printf("Elements in an array2: \n");
    for(i=0;i<num;i++)
    {
    
    for(j=0;j<rows;j++)
    {
        for(k=0;k<col;k++)
        scanf("%d",&b[i][j][k]);
        
    }
    }
    for(i=0;i<num;i++)
    {
 for(j=0;j<rows;j++)
    {
        for(k=0;k<col;k++)
            printf("Address of b[%d][%d][%d]: %p\tValue is: %d\n",i,j,k,&b[i][j][k],b[i][j][k]);
    }
    printf("\n");
    }
return 0;
}
