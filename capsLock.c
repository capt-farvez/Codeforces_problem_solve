#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long int

int main(){
    char str[101];
    int a=1;
    scanf("%s",&str);
    for(int i=1; i<strlen(str); i++){
        if(str[i]>=97 && str[i]<=122){
            a=0;
            break;
        }
    }

    if(a){
        for(int i=0; i<strlen(str); i++){
            if(str[i]>=65 && str[i]<=90){
                  str[i]=str[i]+32;
              }
            else{
                str[i]=str[i]-32;
            }
        }
    }
    printf("%s",str);

}
