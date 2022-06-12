#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char str[1000];
    scanf("%s",str);
    for(i=0; i<strlen(str); i++){
        if(str[0]>=97 && str[0]<=122){
            str[0]=65+str[0]-97;
        }     
    }
    printf("%s\n",str);
    return 0;
}