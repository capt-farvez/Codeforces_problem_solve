#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int count=0;
    char str[101];
    scanf("%s",&str);
    for(int i=0; i<strlen(str); i++){
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9' ){
            count++;
            break;
        }
    }
    if(count>0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}