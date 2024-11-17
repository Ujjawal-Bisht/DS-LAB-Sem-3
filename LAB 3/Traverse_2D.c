#include<stdio.h>
void main()
{
    int r, c ;
    printf("Enter number of rows and columns for array:- ") ;
    scanf("%d %d",&r,&c) ;

    int a[r][c] ;
    printf("Enter elements for array:- ") ;
    for (int i=0 ; i<r ; i++)
    {
        for (int j=0 ; j<c ; j++)
        {
            scanf("%d",&a[i][j]) ;
        }
    }

    int count = 0 ;
    for (int i=0 ; i<r ; i++)
    {
        for (int j=0 ; j<c ; j++)
        {
            count ++ ;
        }
    }

    printf("Total number of elements in arrray is :-%d", count);
}
