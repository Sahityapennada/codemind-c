#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int p,r,t;
    cin>>p>>r>>t;
    double ci=pow((1+r/100.00),t);
    cout<<setprecision(2);
    cout<<fixed;
    cout<<p*ci;
}