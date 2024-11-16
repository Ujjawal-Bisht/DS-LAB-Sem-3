#include<stdio.h>
void main()
{
    int i1,j1;
    int a[10][10] ;
    printf("Enter number of rows and columns for array1:- ");
    scanf("%d %d",&i1,&j1);

    int i2,j2;
    int b[10][10] ;
    printf("Enter number of rows and columns for array2:- ");
    scanf("%d %d",&i2,&j2);

    printf("Enter elements for array 1:- ");
    for (int i=0 ; i<i1 ; i++)
    {
        for (int j=0 ; j<j1 ; j++){
            scanf("%d",&a[i][j]) ;
        }
    }

    printf("Enter elements for array 2:- ");
    for (int i=0 ; i<i2 ; i++)
    {
        for (int j=0 ; j<j2 ; j++){
            scanf("%d",&b[i][j]) ;
        }
    }

    for(int i=0 ; i<3 ; i++){
        for (int j=0 ; j<3 ; j++){
            printf("%d\t",a[i][j]+b[i][j]) ;
        }
        printf("\n");
    }
}