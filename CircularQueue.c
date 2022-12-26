#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int queue[SIZE],front = -1,rear = -1;

void display(){
if (front!=-1)
{
    int i = front;
    printf("Element in circular queue are : ");
    do
    {
        printf("%d  ",queue[i]);
        i= (i+1)%SIZE;
    }while(i!=(rear+1)%SIZE);
}printf("\n");
}// display

void add(){
if (front == (rear + 1) % SIZE){
    printf("Queue is Full \n");
}else{
printf("Enter the element : ");
    if (front == -1){
        front = rear = 0;
        scanf("%d",&queue[rear]);
    }else{
    rear = (rear+1)%SIZE;
    scanf("%d",&queue[rear]);
} // else
} // else
display();
} // add

void delete ()
{
    int data ;
    if(front == -1)
    {
        printf("Queue is Empty \n");
    }
    if(front == rear)
    {
        data = queue[front];
        front = rear = -1;
    }else{
    data = queue[front];
    front = (front + 1 ) % SIZE;
    } // elae
    printf("Deleted element : %d \n", data);
    display();
} // delete


int main()
{
    int choice;
    while(1)
    {
        printf("1.Add  2.Delete  3.Display  4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1 : add();
            break;
            case 2 : delete();
            break;
            case 3 : display();
            break;
            case 4 : exit(0);
            break;
            default : printf("Invalid Choice \n");
        } // switch
    } // while
} // main
