#include<bits/stdc++.h>
using namespace std;

int main(){

char button;
cout<< "Enter a character : ";
cin>>button;


switch(button){

 case 'a':
     cout<< "Hello"<<endl;
     break;

 case 'b':
    cout<<"Salam"<<endl;
    break;

 case 'c':
    cout<<"nice to meet you"<<endl;
    break;

 case 'd':
    cout<< "tata"<<endl;
    break;


 default:
   cout<< "plese input right char"<<endl;
   break;

}


return 0;
}
