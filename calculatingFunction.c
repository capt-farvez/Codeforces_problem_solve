#include<stdio.h>
int main(){
    long long int n, sum_even=0, sum_odd=0, result=0;
    scanf("%lld",&n);

    if(n%2==0){
        result=n/2;

        // for(int i=1; i<=n; i+=2){
        //     sum_odd+=i;
        // }
        // sum_odd=sum_odd-(2*sum_odd);

        // for(int j=2; j<=n; j+=2){
        //     sum_even+=j;
        // }
        //
    }

    else{
        result=((n+1)/2)*(-1);
        //  for(int i=1; i<=n; i+=2){
        //     sum_odd+=i;
        // }
        // sum_odd=sum_odd-(2*sum_odd);

        // for(int j=2; j<n; j+=2){
        //     sum_even+=j;
        // }
        // printf("%lld %lld \n",sum_even, sum_odd);
    }
        // result=sum_even+sum_odd;
    printf("%lld\n",result);


}