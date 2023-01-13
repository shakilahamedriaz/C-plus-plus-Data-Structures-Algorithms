
#include<bits/stdc++.h>
#include<string>
#include<algorithm>

using namespace std;

int main(){
//convert into upper case:

string  str= "chotohaterBOOOOOOOw";

for(int i=0; i<str.size(); i++)
{

    if(str[i]>= 'A'  && str[i]<='Z')
    {
        str[i] +=32;  // 'A' - 'a' = 32 diffrent
    }

}

cout<<str<<endl;


return 0;
}
