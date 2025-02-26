#include<stdio.h>

int search(int arr[], int beg, int end, int elm){
    if (beg > end)
        return -1;

    int mid = (beg+end)/2 ;

    if (arr[mid] == elm)
        return mid;
    else if(arr[mid] > elm)
        return search(arr, beg, mid-1, elm);
    else if(arr[mid] < elm)
        return search(arr, mid+1, end, elm);
    else
        return -1;
}
int main(){
    int n;
    printf("Enter how many numbers u want to enter in array:- ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter all elements:- ");
    for (int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    int elm;
    printf("Enter elm whose pos u want to search:- ");
    scanf("%d",&elm);

    int beg=0, end=n-1, res;
    res = search(arr, beg, end, elm);
    if (res == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", res);

    return 0;
}