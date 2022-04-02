#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int count=0;
    char str1[100], str2[100];
    scanf("%s%s",&str1,&str2);
    for(int i=0; i<strlen(str1); i++){
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);

        if(str1[i]>str2[i]){
            printf("1\n");
            return 0;
        }
        else if (str1[i]<str2[i]){
            printf("-1\n");
            return 0;
        }
        else {
            count++;
        }
    }
      if(count==strlen(str1))
        {
            printf("0\n");
        }
        return 0;
}