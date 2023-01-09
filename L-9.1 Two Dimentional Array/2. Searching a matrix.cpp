#include<bits/stdc++.h>
using namespace std;


int main(){
int r,c;
cin>>r>>c;

int arr[r][c];
for(int i=0; i<r; i++){

    for(int j=0; j<c; j++){

        cout<< "arr["<<i<<"]["<<j<< "] :";
        cin>>arr[i][j];
    }
}

cout<< "The matrix is : "<<endl;


for(int i=0; i<r; i++){

    for(int j=0; j<c; j++){

        cout<<arr[i][j]<< " ";

    }

    cout<<endl;
}

cout<< "Enter the element you want to search : "<<endl;
int x; cin>>x;


bool flag= false;
for(int i=0; i<r; i++){

    for(int j=0; j<c; j++){


        if(arr[i][j]==x){

            cout<<  " Position : arr["<<i<<"]["<<j<< "] :";

            flag= true;
        }
    }
}

if(flag){

    cout<< "Element is found \n";
}
else{

    cout<< "Element is not found\n";
}
return 0;
}
