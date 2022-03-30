#include<stdio.h>
int main(){
    int a,b,c,i, j, count=0;
    int x;
    scanf("%d",&x);

    for(i=0; i<x; i++){
        int sum=0;
        for (j=0; j<3; j++){
            scanf("%d",&a);
            sum+=a;
        }
        if(sum>=2){
            count++;
        }
    }
    printf("%d\n",count);
}