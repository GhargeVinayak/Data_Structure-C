#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * start, *tail, *t, *p, *q, *n;

void create()
{
    n = (struct node *)malloc(sizeof(struct node));
    int x;
    printf("Enter the Data : ");
    scanf("%d", &x);
    n->data = x;
    n->next = 0;

} // create

void display()
{
    if (start == 0)
    {
        printf("List is EMPTY\n");
    }
    else
    {
        t = start;
        do
        {
            printf("%u  %d  %u\n", t, t->data, t->next);
            t = t->next;
        } while (t != start);
    }
}
void add_beg()
{
    create();
    if (start == 0)
    {
        start = n;
        tail = n;
        n->next = start;
    }
    else
    {
        n->next = start;
        start = n;
        tail->next = start;
    }
}

void add_end()
{
    create();
    if (start == 0)
    {
        start = n;
        tail = n;
        n->next = start;
    }
    else
    {
        tail->next = n;
        n->next = start;
        tail = n;
    }
}

void del_beg()
{
    if (start == 0)
    {
        printf("List is EMPTY\n");
    }
    else
    {
        t = start;
        start = start->next;
        free(t);
        tail->next = start;
    }
}

void del_end()
{
    if (start == 0)
    {
        printf("List is EMPTY\n");
    }
    else if (start->next == 0)
    {
        free(start);
        start = 0;
        tail = 0;
    }
    else
    {
        t = start;
        while (t->next != tail)
        {
            t = t->next;
        } // while
        free(tail);
        tail = t;
        tail->next = start;
    } // else
} // del_end
int main()
{
    int ch;
    while (1)
    {
        printf("1.Display\n2.Add at Beginning\n3.Add at Ending\n4.Delete Beginning\n5.Delete Ending\n6.Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            display();
            break;
        case 2:
            add_beg();
            break;
        case 3:
            add_end();
            break;
        case 4:
            del_beg();
            break;
        case 5:
            del_end();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Invalid Choice\n");
        }
    }
    return 0;
}