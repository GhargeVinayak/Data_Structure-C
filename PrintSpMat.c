//(Vinayak Rajendra Gharge)'s
//(Ajinkya Shriram Gurav)'s
#include<stdio.h>
int main(){
int sp[5][5],count=0;
for(int i=0;i<5;i++){
    for (int j=0;j<5;j++){
        printf("Enter Matrix==> %d th row and %d th col : ",i+1,j+1);
        scanf("%d",&sp[i][j]);
    }
}
printf("Row Col Val \n");
for(int i=0;i<5;i++){
    for (int j=0;j<5;j++){
       if (sp[i][j]!=0){
        printf("%d   %d   %d \n", i,j,sp[i][j]);
       }
    }
}
return 0;
}
