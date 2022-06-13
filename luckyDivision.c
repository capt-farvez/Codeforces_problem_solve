#include <stdio.h>
int main(){
    int num, count=0;
    scanf("%d",&num);
    int lky[]={4,7,44,47,77,444,447,474,477,777,774,744};
    for(int i=0; i<12; i++){
        if(num%lky[i]==0){
            count++;
        }
    }
   // printf("%d\n",count);
    if(count>0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}