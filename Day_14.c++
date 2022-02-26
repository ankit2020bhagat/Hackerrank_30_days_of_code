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
    int m1,m2;
    int computeDifference()
    {
        for (int i = 0; i < this->elements.size(); i++)
        {
            if (this->elements[i] > m1)
            {
                m1 = this->elements[i];
            }
            if (this->elements[i] < m2)
            {
                m2 = this->elements[i];
            }
        }
         maximumDifference=abs(m1 - m2);
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