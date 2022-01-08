#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 101

int a[MAX_SIZE];
int top = -1;

void push(int x){
    if(top == MAX_SIZE - 1){
        printf("Error: stack overflow\n");
        return;
    }
    top++;
    a[top] = x;

}

void pop(){
    if (pop == -1){
        printf("Error: The stack is empty!\n");
        return;
    }
    a[top] = NULL;
    top--;
}

int returnTop(){
    return a[top];
}

void print(){
    int i;
    printf("\nStack: ");
    for (i = 0; i <= top; i++){
        printf("%d -> ", a[i]);
    }
    printf("\n");
}

int IsEmpty()
{
    if(top == -1) return 1;
    return 0;
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);

    print();

    printf("\nTop: %d\n", returnTop());

    pop();

    push(7);

    print();

    return 0;
}
