#include<bits/stdc++.h>
using namespace std;
double fact(double n)
{
    if(n<=1)
       return 1;
    return n*fact(n-1);
}
int main()
{
    double n,r;
    cin>>n>>r;
    double l=pow(2,n);
    double a=fact(n);
    double x=n-r;
    double b=fact(r)*fact(x)*l;
    double z=(double)(a/b);
    cout<<z<<endl;
    return 0;
}