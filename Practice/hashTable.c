#include<stdio.h>
int main(){
    int n;
    printf("Enter how many elements u want to enter:- ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i=0 ; i<n ; i++){
        printf("Enter the element:- ");
        scanf("%d", &arr[i]);
    }

        //      arr = [2,3,1,4,2] 

    printf("Enter how many elements you want to find:- ");
    int elm;
    scanf("%d", &elm);

    int elements[elm];
    for (int j=0 ; j<elm ; j++){
        printf("Enter the element to be found:- ");
        scanf("%d",&elements[j]);
    }
            //      elements = [2,4,6,8]

    for(int i=0 ; i<elm ; i++){
        int count = 0;
        for (int j=0 ; j<n ; j++){
            if(elements[i] == arr[j]){
                count++;
            }
        }
        printf("%d --> %d\n",elements[i],count);
    }
    return 0; 

}