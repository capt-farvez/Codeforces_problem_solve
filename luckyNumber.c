#include<stdio.h>
#define lli long long int
int main(){
    lli num, count=0;
    scanf("%lld",&num);
    while(num!=0){
        if(num%10==4 || num%10==7){
            count++;
        }
        num=num/10;
    }
    if(count==4 || count==7){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}