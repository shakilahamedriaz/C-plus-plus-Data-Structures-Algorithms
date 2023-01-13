#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{

    //numeric string to biggest number , like 123= 321(biggest then 123)
    //sort decreasing order then we get biggest

    string s= "133658607979";

    sort(s.begin(), s.end(), greater<int>());

    cout<<s<<endl;



 return 0;
}
