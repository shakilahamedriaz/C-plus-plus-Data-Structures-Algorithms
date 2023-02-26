#include<bits/stdc++.h>
using namespace std;

int multiplication(int a,int b, int c)
{
    //Formal parameters: a,b & c will be taking values from actual parameters.
    int d=a*b*c;
    return d;
}

void g(void)
{

    cout<< "Goog Morning !!"<<endl;
}


int main()

{

    int a,b,c;
    cout<< "value of a : "<<endl;
    cin>>a;
    cout<< "value of b : "<<endl;
    cin>>b;
    cout<< "value of c : "<<endl;
    cin>>c;
                //a,b ,c are actual parameters.
    cout<< "the mul is : "<<multiplication(a,b,c)<<endl;

    g();

}
