#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;
int main()
{
     float sum,an,anext;
     float t = 0.0001; 
     int n;
     cout << "e = " << t << endl;
     an = 0.5; 
     sum = an; 
     for (n = 2; ; n++)
     {
           if (an < t)
           {
               cout << "sum = " << sum << endl;
               break;
           }
           else
           {
               anext = an*2*n+1/4*n-2;
           sum = anext + sum;
           an = anext;
           }
     }
     return 0;
}