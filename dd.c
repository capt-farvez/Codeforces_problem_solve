#include<stdio.h>
int main(){
    int n, m, count=0;
    scanf("%d %d",&n, &m);
    int s[n][m];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%s",&s[i][j]);
            }
        }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            count++;
            printf("%s",s[i][j]);
            if(s[i][j]='T');{
             printf("%d",count);
                }
            }
        }
    
    
}