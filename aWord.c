#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char word[110];
    int low= 0, upr=0;
    scanf("%s",&word);

    for(int i=0; i<strlen(word); i++){
        if(word[i]>='a' && word[i]<='z'){
            low++;
        }
        else if(word[i]>='A' && word[i]<='Z'){
            upr++;
        }
    }
    if(low>upr){
        printf("%s",strlwr(word));
    }
    else if(upr>low){
        printf("%s",strupr(word));
    }
    else if (upr==low){
        printf("%s",strlwr(word));
    }

    return 0;
}