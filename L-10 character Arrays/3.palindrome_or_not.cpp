#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n; // for total word

char arr[n+1];
cin>>arr;

bool check = 1;

for(int i=0; i<n; i++)
{

    if(arr[i] != arr[n-1-i])
    {

        check=0; //false
        break;
    }


}

if(check== true)
{

    cout<< "The word is Palindrome !"<<endl;
}
else{

    cout<< "The word is not Palindrome !"<<endl;
}


return 0;
}
