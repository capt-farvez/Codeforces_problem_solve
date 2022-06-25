#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Array size : ";
    int size;
    cin>>size;
    int arr[size], fst=0, sec=0;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    for(int i=0; i<size; i++){       
        if(arr[i]>fst){
            fst=arr[i];
        }     
    }
    for(int i=0; i<size; i++){
          if(arr[i]<fst && arr[i]>sec){
            sec=arr[i];
        }
    }
    cout<<sec<<endl;
}