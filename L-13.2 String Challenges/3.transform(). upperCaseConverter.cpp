#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;

int main(){


string s = "lowercaseeaseeistriAAAng";

//transform(s shuru theke shes, s.shuru theke toupper korbe)
transform(s.begin(), s.end(), s.begin(), ::toupper);

cout<<s<<endl;



return 0;
}
