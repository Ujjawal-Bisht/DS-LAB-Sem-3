// WAP to swap 2 numbers using call by value method.

#include<stdio.h>
void swap (int a, int b)
{
    int temp ;
    temp = a ;
    a = b ;
    b = temp ;
    printf("Inside function:- a = %d , b = %d\n",a,b);
}
int main()
{
    int a, b ;
    printf("Enter values of a and b:- ");
    scanf("%d %d",&a,&b);

    printf("Before swapping:- a = %d , b = %d\n",a,b);
    swap(a,b) ;
    printf("After swapping:- a = %d , b = %d\n",a,b);
}