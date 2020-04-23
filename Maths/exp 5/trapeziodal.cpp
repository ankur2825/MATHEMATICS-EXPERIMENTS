#include<iostream>
#include<math.h>
using namespace std;
float func(float x)
{
    float a;
    a=sqrt(1+pow(x,2));
    return a;
}
int main()
{
    int n,i;
    float a,b,h,sum,integral;
    cout<<"\n Enter the upper limit: ";
    cin>>a;
    cout<<"\n Enter the lower limit: ";
    cin>>b;
    cout<<"\n Enter the interval: ";
    cin>>n;
    h=(a-b)/n;
    sum=func(a)+func(b);
    i=2;
    while(i<=n)
    {
        sum=sum+2*func(b+(i-1)*h);
        i++;
    }
    integral=h*sum/2;
    cout<<"\n the answer is "<<integral<<"\n\n";
    return 0;
}
