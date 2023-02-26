#include<bits/stdc++.h>
using namespace std;

void addition(int ,int);
void substraction(int ,int);
void multipication(int ,int);




int main()
{
    int a,b;
    cout<< "Enter the value of a: ";
    cin>>a;
    cout<< "Enter the value of b: ";
    cin>>b;

    addition(a,b);
    substraction(a,b);
    multipication(5,5);

}
void addition(int a,int b)
{
    int sum=a+b;
    cout<< "Sum is: "<<sum<<endl;
}


void substraction(int a,int b)
{
     int subs=a-b;
     cout<< "Substraction is : "<<subs<<endl;
}

void multipication(int a,int b)
{
    int mul=a*b;
    cout<< "Multiplication is : "<<mul<<endl;
}

void division(int a,int b)
{
    int div=a/b;
    cout<< "Division is : "<<div<<endl;
}




