#include<stdio.h>

int main(){
    int n, ant=0, dan=0;
    scanf("%d",&n);
    char str[n];
    scanf("%s",&str);
    for(int i=0; i<n; i++){
        if(str[i]=='A'){
            ant++;
        }
        else{
            dan++;
        }
    }
    
    
    if(ant==dan){
        printf("Friendship\n");
    }
    else if (ant>dan){
        printf("Anton\n");
    }
    else if(ant<dan){
        printf("Danik\n");
    }
    
}