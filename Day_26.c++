#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int ryear,rmonth,rday;
    cin>>rday>>rmonth>>ryear;
    int dyear,dmonth,dday;
    cin>>dday>>dmonth>>dyear;
    int diff_year=ryear-dyear;
    int diff_month=rmonth-dmonth;
    int diff_day=rday-dday;
    int diff=(ryear-dyear>0)?10000:(rmonth-dmonth>0&&diff_year==0)?diff_month*500:(rday-dday>0 && diff_year==0)?diff_day*15:0;    

    return 0;
}
