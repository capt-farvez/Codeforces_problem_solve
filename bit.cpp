#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, count=0;
    string str;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>str;
        if(str=="++X" || str=="X++"){
            count++;
        }
        else{
            count--;
        }
    }
    cout<<count<<endl;
}