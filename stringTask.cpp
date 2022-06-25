#include <bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    string s, str, str1;
    cin>>str;
    for(int i=0; i<str.length(); i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o'&& str[i]!='u'&& str[i]!='y' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O'&& str[i]!='U'&& str[i]!='Y' ){
            str1+='.';
            str1+=tolower(str[i]);
        }
    }
    cout<<str1;
}