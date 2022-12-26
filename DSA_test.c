// KAUSTUBH SACHIN IPARKAR. ROLL NO:-33
// VINAYAK RAJENDRA GHARGE. ROLL NO:-28

// QUESTION NO 1:- WAP TO CONVERT A NUMBER INTO WORD...
#include <stdio.h>
#include <string.h>
void main()
{
    int x,n=1000,y;
    char word[100];
    printf("Enter any four digit No :");
    scanf("%d", &x);
    while (n!=0)
    {
        y=x/n;
        switch (y)
        {
        case 1:
            strcat(word, " One");
            break;
        case 2:
            strcat(word, " Two");
            break;
        case 3:
            strcat(word, " Three");
            break;
        case 4:
            strcat(word, " Four");
            break;
        case 5:
            strcat(word, " Five");
            break;
        case 6:
            strcat(word, " Six");
            break;
        case 7:
            strcat(word, " Seven");
            break;
        case 8:
            strcat(word, " Eight");
            break;
        case 9:
            strcat(word, " Nine");
            break;
        default:
            break;
        }
        x=x-(y*n);
        switch (n)
        {
        case 1000:
            strcat(word," Thousand");
            break;
            case 100:
            strcat(word," Hundred");
            break;
            case 10:
            strcat(word,"ty ");
            break;
        default:
            break;
        }
        n=n/10;
        
    }
    printf("%s",word);
}

// QUESTION NO 2:- CREATE A TELEPHONE DIRECTORY....
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int tel;
    char place[10];
    char Name[30];
    struct node *next;
} * start, *tail, *t, *p, *q, *n;

void create()
{
    n = (struct node *)malloc(sizeof(struct node));
    printf("Enter the telephone NO. : ");
    scanf("%d", &n->tel);
    printf("Enter the Name :");
    scanf("%s", &n->Name);
    printf("Enter the Place:");
    scanf("%s", &n->place);
    n->next = 0;
} // creatE

void display()
{
    if (start == 0)
    {
        printf("List is EMPTY\n");
    }
    else
    {
        t = start;
        while (t != 0)
        {
            printf("%d  %s  %s\n", t->tel, t->Name, t->place);
            t = t->next;
        }
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

void del_inBet()
{
    int x;
    if (start == 0)
    {
        printf("List is EMPTY\n");
    }
    else
    {
        printf("Enter the telephone no. want to delete : ");
        scanf("%d", &x);
        if (start->tel == x)
        {
            del_beg();
        }
        else
        {
            t = start;
            while (t->next->tel != x && t != 0)
            {
                t = t->next;
            }
            if (t == 0)
            {
                printf("Entered Node is not present\n");
            }
            else
            {
                q = t->next;
                t->next = q->next;
                free(q);
            }
        }
    }
}

void search()
{
    int x;
    if (start == 0)
    {
        printf("List is EMPTY\n");
    }
    else
    {
        printf("Enter the tel which you want to search: ");
        scanf("%d", &x);
        t = start;
        while (t->tel != x && t != 0)
        {
            t = t->next;
        }
        if (t == 0)
        {
            printf("Entered Node is not present\n");
        }
        else
        {
            printf("the tel found at location %u\n", t);
        }
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("1.Display\n2.Add\n3.Delete in Between\n4.Search\n5.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            display();
            break;
        case 2:
            add_end();
            break;
        case 3:
            del_inBet();
            break;
        case 4:
            search();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid Choice\n");
        }
    }
    return 0;
}
