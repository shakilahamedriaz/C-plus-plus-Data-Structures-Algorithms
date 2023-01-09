#include<bits/stdc++.h>
using namespace std;

int main(){


cout<<"Enter row: ";
int n,m;
cin>>n;
cout<<"Enter columb : ";
cin>>m;

int arr[n][m];

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){


        cout<<"arr ["<<i<<"]["<<j<< "]: ";
        cin>>arr[i][j];
    }
}

cout<<endl<<"Matrix is : "<<endl;

for(int i=0; i<n; i++){

    for(int j=0; j<m; j++){

        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}




return 0;
}
