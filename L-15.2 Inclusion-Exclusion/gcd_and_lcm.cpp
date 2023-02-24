#include<bits/stdc++.h>
using namespace std;

void GCDandLCM(int a, int b){
          
          int n1=a;
          int n2=b;
    while(n2!=0)
    {
        int rem= n1%n2;
            n1=n2;
            n2=rem;
    }
    //here gcd=n1;
    //int lcm=(a*b)/n1; //formula of lcm when we know gcd.

    cout<< "GCD is : "<<n1<<endl<<"LCM is :  "<<(a*b)/n1<<endl;

}

int main()
{
    int a,b;
    cin>>a>>b;

    //cout<<GCDandLCM(a,b)<<endl;
    GCDandLCM(a,b);
}
