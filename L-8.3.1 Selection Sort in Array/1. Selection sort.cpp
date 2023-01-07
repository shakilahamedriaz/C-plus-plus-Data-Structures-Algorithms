/*
rem : find the minimum element in  unsorted array
     and swap it with element at begining.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int arr[n];


//taking inpt.
    for(int i=0; i<n; i++)
    {


        cin>>arr[i];
    }


//main part for selection sort.
    for(int i=0; i<n-1; i++)
    {
        for(int j= i+1; j<n; j++)
        {

            if(arr[j]<arr[i])
            {

                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

//for print array.
    for(int i=0; i<n ; i++)
    {


        cout<<arr[i]<< " ";
    }



    return 0;
}
