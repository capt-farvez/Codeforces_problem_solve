#include<stdio.h>
int main(){
    int a,b,c, e1, e2, e3, e4, e5, e6;
    scanf("%d %d %d",&a, &b, &c);
    e1=a+(b*c);
    e2=a*(b+c);
    e3=a*b*c;
    e4=(a+b)*c;
    e5=(a*b)+c;
    e6=a+b+c;
    if(e1>=e2 && e1>=e3 && e1>=e4 && e1>=e5 && e1>=e6){
        printf("%d",e1);
    }
    else if(e2>=e1 && e2>=e3 && e2>=e4 & e2>=e5 && e2>=e6){
        printf("%d",e2);
    }
    else if(e3>=e1 && e3>=e2 && e3>=e4 && e3>=e5 && e3>=e6){
        printf("%d",e3);
    }
    else if(e4>=e1 && e4>=e2 && e4>=e3 && e4>=e5 && e4>=e6){
        printf("%d",e4);
    }
    else if (e5>=e1 && e5>=e2 && e5>=e3 && e5>=e4 && e5>=e6){
        printf("%d",e5);
    }
    else{
        printf("%d",e6);
    }
    return 0;
}