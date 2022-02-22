#include <bits/stdc++.h>
using namespace std;
int main(){
    int size,data;
    cin>>size;
    int *arr=new int[size];
    for(int i=0;i<size;i++ ){
        cin>>data;
        arr[i]=data;
       
    }
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    
}