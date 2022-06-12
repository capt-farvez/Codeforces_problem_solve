#include <stdio.h>

int main(){
    int num, k;
    scanf("%d%d",&num,&k);
    for(int i=0; i<k; i++){
        if(num%10==0){
            num=num/10;
        }
        else {
            num-=1;
        }
    }
    printf("%d",num);
}