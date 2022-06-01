#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> arr;
    vector<int>result;
    int data;
    for (int i = 0; i < 6; i++)
    {
        vector<int> v1;
        for (int j = 0; j < 6; j++)
        {
            cin >> data;
            v1.push_back(data);
        }
        arr.push_back(v1);
    }
    for (int i = 0; i < arr.size()-2; i++)
    {
        
        for (int j = 0; j < arr[i].size()-2; j++)
        {
            vector<vector<int>>vect1;
           for(int k=i;k<i+3;k++){
               vector<int>vect2;
               for(int l=j;l<j+3;l++){
                   vect2.push_back(arr[k][l]);
               }
               vect1.push_back(vect2);
           }
           int sum=0;
           for(int i=0;i<vect1.size();i++){
               for(int j=0;j<vect1[i].size();j++){
                  if(i==1 && j==0){
                      
                      continue;
                  }
                  else if(i==1 && j==2){
                      continue;
                  }
                  else{
                      sum+=vect1[i][j];
                  }

               }
              
           }
           result.push_back(sum);
        }
       
    }

    // for(int i=0;i<result.size();i++){
       
    // }
   cout<< *max_element(result.begin(),result.end())<<"\n";
}