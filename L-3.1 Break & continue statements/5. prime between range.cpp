#include<bits/stdc++.h>
using namespace std;

int main(){
cout<< "Enter 1st num : ";

int a;cin>>a;
cout<< "Enter 2nd num : ";
int b;cin>>b;

for(int num=a; num<=b; num++){

    int i;
    for(i=2; i<num; i++){

        if(num%i==0){

            break;
        }
    }
    if(i==num){

        cout<<num<<endl;
    }

}

return 0;
}
