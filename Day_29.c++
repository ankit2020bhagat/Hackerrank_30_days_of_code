#include <bits/stdc++.h>
using namespace std;
int bitwiseAnd(int num, int k)
{
    int max=0,bit=0;
    for (int i = 1; i < num; i++)
    {
        
        for (int j = i + 1; j < num; j++)
        {
            bit = i & j;
           

            if (bit > max && bit < k)
            {
                max = bit;
            }
        }
    }
    return max;
}
int main()
{
    int test, num, k;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        cin >> num >> k;
        cout << bitwiseAnd(num, k) << "\n";
    }
}