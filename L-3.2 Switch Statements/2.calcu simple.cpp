#include<bits/stdc++.h>
using namespace std;

int main(){

cout<< "Enter number a : "<<endl;
float a; cin>>a;
cout<< "Enter number b : "<<endl;
float b; cin>>b;

cout<< "Enter operator for these numbers : "<<endl;
char opp;
cin>>opp;


switch(opp){

      case '+':
        cout<<a+b<<endl;
        break;

      case '-':

        cout<<a-b<<endl;
        break;

      case '*':
        cout<<a*b<<endl;
        break;

      case '/':
        cout<<a/b<<endl;
        break;



      default:

        cout<< "Enter correct operator !";
        break;


}



return 0;
}
