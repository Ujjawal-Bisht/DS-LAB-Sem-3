#include<stdio.h>
void main(){
    // Insertion at Desired location of 1D array
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
    // Insertion at Desired location of 1D array
    int elm ,pos ;
    printf("\nEnter the element which u want to enter:- ");
    scanf("%d",&elm);

    printf("\nEnter the position where u want to enter:- ");
    scanf("%d",&pos);

    for (int i=n-1 ; i>=pos-1 ; i--){
        a[i+1] = a[i];
    }
    a[pos-1] = elm;

    printf("\nArray after Insertion:- ");
    for (int i=0 ; i<=n ; i++){
        printf("%d\t",a[i]);
    }
}
