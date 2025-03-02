#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct string
{
    struct Node* first;
}String; 

typedef struct node
{
    char letter;
    struct node* next;
}Node;

void print_node(Node* first)
{
    Node* p = first;

    while(p)
    {
        printf("%c", p->letter);
        p = p->next;
    }

    printf("\n");
}

void define_string(Node* first, char *s)
{
    Node* p = first;

    for (int i = 0; i < strlen(s); i++)
    {
        p->letter = s[i];
        p = p +1;
    }

    p->next = NULL;
}

void print_string(Node* first)
{
    Node* p = first;

    while (p)
    {
        printf("%c", p->letter);
        p = p->next;
    }
}

int main()
{
   /*  Node* c1 = (Node*)malloc(sizeof(Node));
    int a = 5;
    Node* c2 = (Node*)malloc(sizeof(Node));
    int b = 10;
    Node* c3 = (Node*)malloc(sizeof(Node));
    char txt[] = "hola";
    Node* c4 = (Node*)malloc(sizeof(Node));

    c1->letter = 'h';
    c1->next = c2;

    c2->letter = 'o';
    c2->next = c3;

    c3->letter = 'l';
    c3->next = c4;

    c4->letter = 'a';
    c4->next = NULL;

    print_node(c1);

    free(c1);
    free(c2);
    free(c3);
    free(c4); */

    String s;
    s.first = (Node*)malloc(sizeof(Node));

    define_string(s.first, "hola");
    print_string(s.first);
}