#include <bits/stdc++.h>
#include <vector>
using namespace std; 
void deciamltoNumber(vector<int> &arr,int num){
    int re;
 
    while(num>1){
        
      re=num%2;
      arr.push_back(re);
      num/=2;
    }
     arr.push_back(num);
}
int print(vector<int> arr){
    int count=1;
    int max;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]==1 && arr[i+1]==1){
             count++;
        }
        if(count>max){
            max=count;
        }
        if(arr[i]==0){
            count=1;
        }
   }
   return max;
}
int main(){
    
    vector<int> arr;
    int num;
    cout<<"enter the number\n";
    cin>>num;
    deciamltoNumber(arr,num);
   
   cout<< print(arr);
}