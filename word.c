#include<stdio.h>
#include<string.h>
int main(){
    int i,x;
    char str[101];
    scanf("%d",&x);
    for(i=0; i<x; i++){
        scanf("%s",str);
        int a =strlen(str);
        if(a<11){
            printf("%s\n",str);
        }
        else {
            printf("%c%d%c\n",str[0],a-2,str[a-1]);
        }
    }

}