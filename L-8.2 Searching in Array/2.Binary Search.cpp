#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key){

int s=0;
int e=n;

while(s<=e){

    int mid=(s+e)/2;

    if(arr[mid]==key){

        return mid;
    }
    else if(arr[mid]>key){

         e=mid-1;

    }else{

      s= mid+1;

    }
}

return -1;

}



int main(){


cout<< "Enter the size of the array : ";
int n; cin>>n;

int arr[n];

cout<< "now enter these elements : "<<endl;
for(int i=0; i<n; i++){

    cout<< "Element "<<i<< ": ";
    cin>>arr[i];
}

sort(arr,arr+n);

cout<< "Output of the  array after sorting : "<<endl;
for(int i=0; i<n; i++){


    cout<<arr[i]<<" ";
}


cout<< "\nEnter the key that you want to search : ";
int key; cin>>key;


cout<<"The index is : "<<binarySearch(arr,n,key)<<endl;
return 0;
}
