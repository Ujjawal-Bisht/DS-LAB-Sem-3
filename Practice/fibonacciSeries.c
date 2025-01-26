#include<stdio.h>
int main(){
    // 0 1 1 2 3 5 8 13 21 34 55 89 144

    int a[100], n;
    a[0]=0, a[1]=1;

    printf("Enter how many numbers you want to print: ");
    scanf("%d",&n);

    printf("First %d numbers of Fibonacci Series are:- ",n);

    if (n==1)
        printf("%d\t",a[0]);
    else if(n==2)
        printf("%d\t%d\t",a[0],a[1]);
    else{
        printf("%d\t",a[0]);
        printf("%d\t",a[1]);
        for (int i=2 ; i<n ; i++){
            a[i] = a[i-1] + a[i-2];
            printf("%d\t",a[i]);
        }
    }

    return 0;
}