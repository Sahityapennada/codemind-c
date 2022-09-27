#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int r;
    cin>>r;
    float const pi=3.14;
    float area;
    area=pi*r*r;
    cout<<setprecision(2);
    cout<<fixed;
    cout<<area;
}