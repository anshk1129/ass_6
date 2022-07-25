#include<stdio.h>
#include <math.h>
int main(){
 int n, f=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=2;i<=sqrt(n);i++){
             if(n%i==0){
                f=1;
                break;
             }
    }
    if(f==1)
    printf("Not Prime");
    else
    printf("Prime");
   
return 0;
}