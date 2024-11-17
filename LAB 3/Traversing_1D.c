#include<stdio.h>
void main()
{
    //Printing total number of elements in an array.
    int n;
    printf("Enter total number of elements u want to enter:- ");
    scanf("%d",&n);

    int a[n];
    for (int i=0 ; i<n ; i++)
    {
        printf("Enter element %d :- ",i+1);
        scanf("%d",&a[i]);
    }

    int ttl = 0 ;
    for (int i=0 ; i<n ; i++)
    {
        ttl += 1 ;
    }
    printf("Total number of elements in array is :- %d",ttl);
}