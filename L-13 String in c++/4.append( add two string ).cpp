#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){

string s1= "fam";
string s2= "ily";


//without use function :
cout<<s1+s2<<endl; // normallly
int s1=s1+s2;
cout<<s1<<endl;

//with use function :

s1.append(s2);

cout<<s1<<endl;


return 0;
}
