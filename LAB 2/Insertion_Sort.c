#include<stdio.h>
int main()
{
    //Insertion Sort
    int n ;
    printf("Enter how many elements u want to enter in array:- "); 
    scanf("%d",&n);

    int a[n] ;
    printf("Enter all integer elements:- ");
    for (int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    printf("Entered array:- ");
    for (int i=0 ; i<n ; i++){
        printf("%d\t",a[i]) ;
    }
    //Insertion Sort Algorithm 
    for (int i=1 ; i<=n ; i++)
    {
        int temp = a[i] ;
        int j ;
        for (j=i-1 ; j>=0 && a[j] > temp ; j--)
        {
            a[j+1] = a[j] ;
        }
        a[j+1] = temp ;

    }

    printf("\nArray after Insertion sort:- ") ;
    for (int i=0 ; i<n ; i++){
        printf("%d\t",a[i]) ;
    }
    return 0 ;
} 