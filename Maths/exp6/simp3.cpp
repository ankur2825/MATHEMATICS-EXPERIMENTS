#include<iostream>
#include<cmath>
using namespace std;

float f(float x)
{
        return sqrt(1+pow(x,3));        //Define the function f(x)
}

float simpson(float a, float b, int n)
{
        float h, x[n+1], sum = 0;
        int j;
        h = (b-a)/n;
        
        x[0] = a;
        
        for(j=1; j<=n; j++)
        {
                x[j] = a + h*j;
        }
        
        for(j=1; j<=n/2; j++)
        {
                sum += f(x[2*j - 2]) + 4*f(x[2*j - 1]) + f(x[2*j]);
        }
        
        return sum*h/3;
}

int main()
{
        int a,b,n;
        a = 1;   
        b = 4;          
        n = 6;    
        cout<<"\nvalue of a="<<a;
        cout<<"\nvalue of b="<<b;
        cout<<"\nsub intervals n="<<n;      
        if (n%2 == 0)
                cout<<"\nthe value of integral is "<<simpson(a,b,n)<<endl;
        else
                cout<<"n should be an even number";
        return 0;
}
