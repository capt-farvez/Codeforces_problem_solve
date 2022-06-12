#include <stdio.h>
int main(){
    int k,n,w,price=0,totalPrice=0;
    scanf("%d%d%d",&k,&n,&w);
    for(int i=1; i<=w; i++){
        price = i*k;
        totalPrice+=price;
    }
    int borrow= totalPrice - n;
    if(borrow<0){
        printf("0\n");
    }
    else {
        printf("%d\n",borrow);
    }
}