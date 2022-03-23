#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    string str;
     cin>>str;
    try{
       int num = stoi(str);
      cout<<num <<endl;
    }
    catch (exception& ex)
	{
		cout << "Bad String" << endl;
	}
    
	return 0;
}
