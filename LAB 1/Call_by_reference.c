// WAP to swap 2 numbers using call by reference method.

#include<stdio.h>
void swap2(int *a, int *b);

void main()
    {
        int a, b;
        printf("Enter values of a and b:- ");
        scanf("%d %d",&a,&b);
        printf("Before swapping:- a = %d , b = %d\n",a,b);
        swap2(&a,&b) ;
        printf("After swapping:- a = %d , b = %d\n",a,b);
    }

void swap2(int *a, int *b)
{
    int temp;
    temp = *a ;
    *a = *b ;
    *b = temp ;
    printf("Inside function:- a = %d , b = %d\n",*a,*b);
}
