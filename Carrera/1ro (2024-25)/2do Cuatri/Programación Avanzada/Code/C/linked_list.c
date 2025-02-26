#include<stdlib.h>
#include<stdio.h>

typedef struct node
{
    int value;
    struct node* next;
}Node;

int main()
{
    Node* first = (Node*)malloc(sizeof(Node));
    Node* second = (Node*)malloc(sizeof(Node));
    Node* third = (Node*)malloc(sizeof(Node));

    first->value = 10;
    first->next = second;

    second->value = 15;
    second->next = third;

    third->value = 20;
    third->next = NULL;

    Node* ptr = first;
    while(ptr)
    {
        printf("%d\n",ptr->value);
        ptr = ptr->next;
    }

    free(first);
    free(second);
    free(third);
}