#include <stdio.h>
int main (){
    int count=0, n, lim;
    scanf("%d%d",&n,&lim);
    int arr[n];
    for(int i =0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int j=0; j<n; j++){
        if(arr[j]>=arr[lim-1]  && arr[j]>0){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}