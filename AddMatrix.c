//(Vinayak Rajendra Gharge)'s
//(Ajinkya Shriram Gurav)'s
#include<stdio.h>
int main(){
int a[3][3],b[3][3],sum[3][3]={0};
for(int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        printf("Enter Matrix A ==> %d th row and %d th col : ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
}
for(int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        printf("Enter Matrix B ==> %d th row and %d th col : ",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
}
printf("Sum of Matrix A and B is :");
for(int i=0;i<3;i++){
    for (int j=0;j<3;j++){
            sum[i][j]=a[i][j]+b[i][j];
        printf("%d ",sum[i][j]);

    } printf("\n");
}
return 0;
}
