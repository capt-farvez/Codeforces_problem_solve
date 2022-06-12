#include<stdio.h>
#include <stdlib.h>
#include<string.h>
 
int main(){
    char str[100];
    int sum=1;
    scanf("%s",str);
    for(int i=0; i<(strlen(str)-1); i++){
        for(int j=i+1; j<strlen(str); j++){
            if(str[i]!=str[j] ){
                break;
            }
            else {
                sum++;
            }
            if(sum>=7){
                break;
            }
        }
        if(sum>=7){
            break;
        }
        sum = 1;
    }
    if(sum>=7){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
 
}