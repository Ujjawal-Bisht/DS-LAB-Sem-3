#include<stdio.h>
int main()
{
    //Bubble Sort
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
    //Bubble Sort Algorithm 
    int flag = 0 ;
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n-i-1 ; j++){
            if (a[j] > a[j+1])
            {
                int t = a[j] ;
                a[j] = a[j+1] ;
                a[j+1] = t ;
                flag = 1 ;
            }
        }
        if (flag == 0)
            break ;
    }
    printf("\nArray after bubble sort:- ") ;
    for (int i=0 ; i<n ; i++){
        printf("%d\t",a[i]) ;
    }
    return 0 ;
} 