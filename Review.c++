#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2,str3;
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        cin>>str1;
    for(int i=0;i<str1.length();i++){
        if(i%2==0){
          str2+=str1[i];
        }
        else{
            str3+=str1[i];
        }
    }
    cout<<str2<<" "<<str3;
    }
   
}