#include<stdio.h>
void main(){
    // Insertion at end of 1D array
    int n ;
    printf("Enter how many elements u want to enter in array:- "); 
    scanf("%d",&n);

    int a[n+1] ;
    printf("Enter all integer elements:- ");
    for (int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    printf("Entered array:- ");
    for (int i=0 ; i<n ; i++){
        printf("%d\t",a[i]);
    }
    //Insertion at end of 1D array
    int elm ;
    printf("\nEnter the element which u want to enter:- ");
    scanf("%d",&elm);

    a[n] = elm ;

    printf("\nArray after Insertion:- ");
    for (int i=0 ; i<=n ; i++){
        printf("%d\t",a[i]);
    }
}