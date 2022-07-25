#include<stdio.h>
int main(){
 int n,rem,val=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        n=n/10;
        val=val*10+rem;
    }
    printf("Reverse is %d ",val);
    
return 0;
}