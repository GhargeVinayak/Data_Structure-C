#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *start, *p, *t, *q, *r, *n, *tail;
void create()
{
    n = (struct node *)malloc(sizeof(struct node));
    int x;
    printf("Enter the data : ");
    scanf("%d", &x);
    n->data = x;
    n->next = 0;
}

void display()
{
    if (start == 0)
    {
        printf("list is empty\n");
    }
    else
    {
        t = start;
        while (t != 0)
        {
            printf("%d  ", t->data);
            t = t->next;
        }
        printf("\n");
    }
}
void add_end()
{
    create();
    if (start == 0)
    {
        start = n;
        tail = n;
    }
    else
    {
        tail->next = n;
        tail = n;
    }
}
void delete_first()
{
    if (start == 0)
    {
        printf("list is empty\n");
    }
    else
    {
        p = start;
        start = start->next;
        free(p);
    }
}
void main()
{
    int ch;
    while (1)
    {
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            add_end();
            break;
        case 2:
            delete_first();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("INVALID INPUT");
            break;
        }
    }
}
