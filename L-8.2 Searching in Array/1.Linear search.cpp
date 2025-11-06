#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for(int i=0; i<=n ;i++){

        if(arr[i]==key){

            return i;
        }
    }
    return -1;

}



int main(){

int n;
cout<< "Enter the size of the Array :";
cin>>n;

int arr[n];
for(int i=0; i<=n; i++){

    cout<<"Element index "<<i<< ": ";
    cin>>arr[i];
}

int key;
cout<< "Enter the key that you want to search : ";
cin>>key;

cout<<linearSearch(arr,n,key)<<endl;


return 0;
}
