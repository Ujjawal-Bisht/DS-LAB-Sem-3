#include<stdio.h>

int p(){
    int a[] = {6,2,3,4,5,6} ;
    printf("a = %d\n",a);
    printf("a[0] = %d\n",&a[0]);
    printf("a+1 = %d\n",a+1);
    printf("*a+1 = %d\n",*a+1);
    printf("*(a+1) = %d\n",*(a+1));
    printf("&a+1 = %d\n",&a+1);
    printf("&a[0] +1 = %d\n",&a[0] + 1);

    return 0 ;
}

int main()
{
    int b[] = {6,2,3,4,5,6} ;
    int *p ;
    p = b ;

    int a[3][3] = {{1,2,3},{3,4,5},{6,7,8}};
    int *q;
    //q = b ;
    printf("Address of a[0][0] = %d\n",a);
    printf("Address of a[0][0] = %d\n",*a);
    printf("Address of a[0][0] = %d\n",&a);
    printf("Address of a[0][0] = %d\n",a[0]);
    printf("Address of a[0][0] = %d\n",a[0][0]);
    printf("Address of a[0][0] = %d\n",a+1);
    printf("Address of a[0][0] = %d\n",*a+1);
    printf("Address of a[0][0] = %d\n",&a+1);
    printf("Address of a[0][0] = %d\n",a[0]+1);
    printf("Address of a[0][0] = %d\n",a[0][0]+1);

    printf("Done\n");
    return 0 ;
}
