#include<stdio.h>
void main(){
    // Insertion at beggining of 1D array
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
    //Insertion at beggining of 1D array
    int elm ;
    printf("\nEnter the element which u want to enter:- ");
    scanf("%d",&elm);

    for (int i=n-1 ; i>=0 ; i--){
        a[i+1] = a[i];
    }
    a[0] = elm ;

    printf("\nArray after Insertion:- ");
    for (int i=0 ; i<=n ; i++){
        printf("%d\t",a[i]);
    }
}