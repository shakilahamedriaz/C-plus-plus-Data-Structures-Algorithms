#include<bits/stdc++.h>
using namespace std;

int main(){

int n; cin>>n;  // size of array
cin.ignore();

char arr[n+1];
cin.getline(arr,n);  //input for -> multiple word/sentence
cin.ignore();  //for clear buffer


int i=0;
int currLen =0, maxLen=0;

while(1){


    if(arr[i] == ' ' || arr[i] == '\0')
    {


        if(currLen>maxLen){

            maxLen = currLen;
        }

        currLen =0;
    }
    else{
     currLen++;

    if(arr[i] == '\0')
        break;

    i++;
}
}
cout<<maxLen<<endl;

return 0;
}
