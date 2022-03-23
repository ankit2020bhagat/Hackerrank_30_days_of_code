#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int num){
    if(num==1){
        return false;
    }
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main() {
    int num,test;
    cin>>test;
    for(int i=0;i<test;i++){
        cin>>num;
        if(isPrime(num)){
          cout<<"Prime"<<"\n";
        }
        else{
            cout<<"Not prime"<<"\n";
        }
    }
    return 0;
}
