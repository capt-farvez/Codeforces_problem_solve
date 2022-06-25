#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long int

int palindrome(int n){
    
  int reversed = 0, remainder, original;
    original = n;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if (original == reversed){
        return 1;
    }
    else{
        return 0;
    }

}
int start_from(int n){
    int count=1;
    if(n==1){
        return 1;
    }
    else {
        for(int i=1; i<n; i++){
        count=count*10;
        }
        return count;
    }
}
int last_range(int n){
    int count=1;
    for(int i=0; i<n; i++){
        count=count*10;
    }
    return count;
}
int main(){
    int t, n, num;
    scanf("%d",&t);
    int start=0;
    for(int i=0; i<t; i++){
        scanf("%d %d",&n, &num);
        start=start_from(n);

        for(int j=0; j<last_range(n); j++){ 
            num=num+start;
             printf("%d\n",start);

        if(palindrome(num) && start<last_range(n)){
            printf("%d\n",start);
            return 0;
        }
        start++;
        }

        printf("\n%d %d",start_from(n), last_range(n));
        
    }

}
