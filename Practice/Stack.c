#include <stdio.h>
#define MAX 5
int stack[MAX];
int top=-1 ;

void tp(){
    printf("Top of the stack is:- %d\n", top);
}
int push(int data){
    if (top == MAX-1){
        printf("Stack Overflow!!!\n");
        return 0 ;
    }
    else{
        top++ ;
        stack[top] = data ;
        printf("Data entered successfully...\n");
        return 0 ;
    }
}

void display(int max){
    if (top == -1){
        printf("Stack Underflow...\n");
    }
    else{
        for (int i=0 ; i<top+1 ; i++){
            printf("%d\t",stack[i]);
        }
    }
}

void pop(){
    if (top == -1){
        printf("Stack Underflow\n");
    }
    else{
        printf("poped element:- %d\n",stack[top]);
        top--;
    }
}
int main(){
    // Enter data to stack
    int n;
    printf("Enter how many elements u want to enter:- ");
    scanf("%d",&n);

    for (int i=0 ; i<n ; i++){
        int x;
        printf("Enter element %d:- ", i+1);
        scanf("%d",&x);
        push(x);
    }

    printf("Complete stack is :- \n");
    display(top+1) ;
    printf("\n");
    tp();

    pop();
    display(top+1);
    printf("\n");
    tp();

    pop();
    display(top+1);
    printf("\n");
    tp();

    pop();
    display(top+1);
    printf("\n");
    tp();

    return 0;
}
