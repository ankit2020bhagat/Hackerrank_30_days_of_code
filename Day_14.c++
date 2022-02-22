// #include <bits/stdc++.h>
// #include <cmath>
// using namespace std;

// class Difference
// {
// private:
//     vector<int> element;

// public:
//     int maxDifference, max, min;
//     Difference(vector<int> v1)
//     {
//         element = v1;
//     }
//     int computeDifference()
//     {
//         for (int i = 0; i < this->element.size(); i++)
//         {
//             if (this->element[i] > max)
//             {
//                 max = this->element[i];
//             }
//             if (this->element[i] < min)
//             {
//                 min = this->element[i];
//             }
//         }
//         return abs(max - min);
//     }
// };
// int main(){
//     int N;
//     cin >> N;
    
//     vector<int> a;
    
//     for (int i = 0; i < N; i++) {
//         int e;
//         cin >> e;
        
//         a.push_back(e);
//     }
//      Difference D(a);
//      cout<<D.computeDifference();
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    
    Difference(vector<int> v1)
    {
        this->elements = v1;
    }
    int max,min;
    int computeDifference()
    {
        for (int i = 0; i < this->elements.size(); i++)
        {
            if (this->elements[i] > max)
            {
                max = this->elements[i];
            }
            if (this->elements[i] < min)
            {
                min = this->elements[i];
            }
        }
         maximumDifference=abs(max - min);
         return maximumDifference;
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}