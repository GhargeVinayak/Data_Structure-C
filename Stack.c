#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stack[SIZE],top=-1;
void  push(){
if (top==SIZE-1){
    printf("Stack is Overflow\n");
}else{
    top++;
    printf("Enter the Element : ");
    scanf("%d",&stack[top]);
}
display();
}
void pop(){
if (top==-1){
    printf("Stack is Underflow\n");
}else{
top--;
}
display();
}
void display(){
    printf("Stack is : \n");
for(int i=top;i>=0;i--){
    printf("%d \n",stack[i]);
}
}
int main(){
int ch;
while(1){
    printf("\n1.Push  2.Pop  3.Display  4.Exit \nEnter your choice : ");
    scanf("%d",&ch);
    switch(ch){
    case 1 : push();
    break;
    case 2 : pop();
    break;
    case 3 : display();
    break;
    case 4 : exit(0);
    break;
    default : printf("Invalid Input\n");
    }
}
return 0;
}
