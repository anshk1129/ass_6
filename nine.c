#include<stdio.h>
int main(){
 int n1,n2,LCM;
    printf("Enter the numbers");
    scanf("%d%d",&n1,&n2);
    for(LCM=n1>n2?n1:n2;LCM<=n1*n2;LCM=LCM+(n1>n2?n1:n2)){
        if(LCM%n1==0&&LCM%n2==0)
        break;
    }
    printf("LCM is %d ",LCM);
    
        
return 0;
}