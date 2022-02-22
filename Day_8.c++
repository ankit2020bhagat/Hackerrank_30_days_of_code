#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    int num;
    string str1;
    map<string,uint> M1;
    for(int i=0;i<test;i++){
        cin>>str1>>num;
        M1.insert({str1,num});
    }
    string queries;
    
    while (cin>>queries)
    {
        if(M1.find(queries)!=M1.end()){
             cout <<M1[queries]<<"\n";
        }
        else{
             cout << "Not found" << '\n';
        }
    }
    
//    int queries=test;
//    string str2;
 
//    for(int i=0;i<queries;i++){
//          cin>>str2;
//          if(M1[str2]){
//              cout<<str2<<"="<<M1[str2]<<"\n";
//          }
//          else{
//              cout<<"Not found"<<"\n";
//          }
//    }
   
    
}