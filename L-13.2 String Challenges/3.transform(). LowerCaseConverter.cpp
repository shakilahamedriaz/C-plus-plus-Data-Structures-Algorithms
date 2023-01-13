#include<bits/stdc++.h>
#include<string>
#include<algorithm>

using namespace std;

int main()
{

    string s= "UPPERCASESTRING";

    transform(s.begin(),s.end(), s.begin(), ::tolower);


    cout<<s<<endl;




    return 0;
}
