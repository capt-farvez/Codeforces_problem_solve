#include<stdio.h>

int main(){
    int n;
    int in, out , hgh=0, current=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d%d",&out, &in);
        current+=in;
        current-=out;
        //printf("in:%d out:%d current:%d",in,out,current);
        if(current>=hgh)
            hgh=current;
    }
    printf("%d",hgh);
    return 0;
}
