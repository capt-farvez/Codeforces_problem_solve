#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a,b,result=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        if((a%b)==0){
            cout<<0<<endl;
        }
        else{
            result=b-(a%b);
            cout<<result<<endl;
        }
        }
}