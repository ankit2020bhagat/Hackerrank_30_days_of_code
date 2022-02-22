#include <bits/stdc++.h>
using namespace std;

class Person{
public:
    int age;
    Person(int initial_age){
      if(initial_age<0){
          age=initial_age;
          cout<<"Age is not valid, setting age to 0."<<"\n";
      }
      else{
          age=initial_age;
      }
    }
    void yearPasses(){
        age++;
    }
    void amIOld(){
        if(age<13){
            cout<<"You are young.. "<<endl;
        }
        else if(age>=13 && age<18){
          cout<<"You are a teenager.. "<<endl;
        }
        else{
            cout<<"You are old.."<<endl;
        }
    }

};
int main(){
    int test,age;
    cin>>test;
    for(int i=0;i<test;i++){
        cin>>age;
        Person P(age);
        P.amIOld();
        for(int j=0;j<3;j++){
            P.yearPasses();
        }
        P.amIOld();
    }
}
