//(Vinayak Rajendra Gharge)'s
//(Ajinkya Shriram Gurav)'s
#include<stdio.h>
int main(){
int a[5][3]={1,0,4,
             2,2,2,
             3,1,6,
             1,2,7,
             2,3,8};
int b[5][3]={1,3,4,  //
             3,2,2,   //
             1,0,6,
             2,2,7,
             2,3,8};
int sum=0;
int j=0;
int result[10][3];
int store[10][3];
int k=0;


for(int i=0 ;i<5;i++)
{

    for(int j=0;j<3;j++)
    {

        store[i][j]=b[i][j];

    }
}

//printf("Sum of Matrix A and B is : \n");
for(int i=0;i<5;i++) // i is for a
    {
        for( j=0; j<5;j++)  //j is for b.
{
    if(a[i][0]==b[j][0]  && a[i][1]==b[j][1])
    {
        result[k][0]=a[i][0];
        result[k][1]=a[i][1];
        result[k][2]=a[i][2]+b[j][2];
        b[j][2]=0;
        k++;
        break;
    }

}// end of j loop

if(j==5)  // we I don't find the no.
{
     result[k][0]=a[i][0];
        result[k][1]=a[i][1];
        result[k][2]=a[i][2];
        k++;


}

}// end of i loop

for(int i=0 ;i<5;i++)   // i is for
{
   if(b[i][2]!=0)
   {

       result[k][0]=b[i][0];
       result[k][1]=b[i][1];
       result[k][2]=b[i][2];
       k++;
   }

}

for(int i=0; i<k; i++)
{

    printf("%d %d %d \n",result[i][0],result[i][1],result[i][2]);
}

return 0;


    }

