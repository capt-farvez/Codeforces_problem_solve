#include<stdio.h>

int main(){
    int n,sum=0, count=0;
    scanf("%d",&n);
    if(n%5==0){
        printf("%d\n",n/5);
    }
    else {
        printf("%d\n",(n/5)+1);
    }
}