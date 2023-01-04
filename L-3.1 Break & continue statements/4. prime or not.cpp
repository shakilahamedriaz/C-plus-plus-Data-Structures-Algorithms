#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int i;
if(n==1){

    cout<< "Not prime"<<endl;
}

for(i=2; i<n; i++){

    if(n%i==0){
        cout<< " Not prime"<<endl;
        break;
    }
}
 if(i==n){

    cout<< "prime number !"<<endl;
 }

return 0;
}
