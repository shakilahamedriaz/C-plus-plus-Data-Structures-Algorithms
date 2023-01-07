//Reapetedly swap two adjacent elements if they are in wrong order.
//wrong order means = L>R ; ex: 5,2
//Right oreder      =R>L ; ex: 2,5


//total iteration n-1
#include<bits/stdc++.h>
using namespace std;

int main(){

cout<< "Enter the size of an array : ";
int n; cin>>n;

int arr[n];

for(int i=0; i<n; i++){

    cin>>arr[i];
}


int counter=1;
while(counter<n){

    for(int i=0; i<n-counter; i++){

        if(arr[i]>arr[i+1]){

           int temp=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;

        }
    }

    counter++;
}


cout<< "The above array with bubble sorted from : ";

for(int i=0; i<n; i++){

    cout<<arr[i]<< " ";
}


return 0;

}

//bubble sort karon : bubble er moto max values gula upre aisha pre lol.tai
