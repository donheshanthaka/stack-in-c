#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *top = NULL;

void push(int data){
    if(top == NULL){
        top = malloc(sizeof(struct node));
        top->data = data;
        top->link = NULL;
    }else{
        struct node *newNode = malloc(sizeof(struct node));
        newNode->data = data;
        newNode->link = top;
        top = newNode;
    }
}

void pop(){
    if (top == NULL){
        printf("Error: The stack is empty!\n");
    }else{
        struct node *deleteNode = top;
        top = top->link;
        free(deleteNode);
        deleteNode = NULL;
    }
}

struct node *returnTop(){
    return top;
}

void print(){
    struct node *temp = top;
    printf("\n");
    while(temp != NULL){
        printf(" <- %d", temp->data);
        temp = temp->link;
    }
    printf("\n");
}


int main()
{

    pop();

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);

    print();

    printf("\nTop: %d\n", returnTop()->data);

    pop();

    push(7);

    print();

    return 0;
}
