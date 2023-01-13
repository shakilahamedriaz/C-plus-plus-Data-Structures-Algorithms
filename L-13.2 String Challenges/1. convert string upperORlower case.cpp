#include<bits/stdc++.h>
#include<string>
#include<algorithm>

using namespace std;

int main(){
//convert into upper case:

string  str= "asdfshakilahamedriaAAAAz";

for(int i=0; i<str.size(); i++)
{

    if(str[i]>= 'a'  && str[i]<='z')
    {
        str[i] -=32;  // 'a' - 'A' = 32 diffrent
    }

}

cout<<str<<endl;


return 0;
}
