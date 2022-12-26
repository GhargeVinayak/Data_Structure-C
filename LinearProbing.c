#include<stdio.h>
int main(){
int hash[10]={0,0,0,0,0,0,0,0,0,0},loc,key,size,no_key,search,p,i=0;

printf("Enter the size of Hash Table :");
scanf("%d",&size);
printf("Enter No. of keys :");
scanf("%d",&no_key);
for(i=0;i<no_key;i++)
{
    printf("Enter Keys %d : ",i+1);
    scanf("%d",&key);
    loc=key%size;
    while(hash[loc]!=0)
    {
        loc++;
        if(loc==size){
            loc=0;
        }
    }
    hash[loc]=key;
}
printf("Hash Table is \n");
for(i =0;i<size;i++)
{
    printf("\t | %d | %d | \n",i,hash[i]);
}
printf("Enter the No. want to search : ");
scanf("%d",&search);
p=search%size;
for(i = 0; i<size;i++)
{
    if (hash[i]==search)
    {
        printf("\n Found at location %d ",i);
    }
}
return 0;
}
