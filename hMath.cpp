#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int tmp;
    cin>>s;
    int len=s.length();
    for(int i=0; i<=len; i+=2){
        for(int j=i+2; j<=len ; j+=2){
            if(s[i]>=s[j]){
                tmp=s[i];
                s[i]=s[j];
                s[j]=tmp;
            }
        }
    }
    cout<<s;
}