#include<stdio.h>
int main(){
    int n;
    double count=0;
    scanf("%d",&n);
    int  arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        count+=arr[i];
    }
    printf("%lf\n",count/n);
}