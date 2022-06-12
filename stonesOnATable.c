#include <stdio.h>

int main (){
    int n, sum = 0;
    scanf("%d",&n);
    char str[n];
    scanf("%s",&str);

    for(int i =0; i<n; i++){
        if(str[i]==str[i+1]){
            sum++;
        }
    }
    printf("%d\n",sum);
    return 0;
}