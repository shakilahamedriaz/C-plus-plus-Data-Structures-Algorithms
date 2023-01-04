// all nots availble on given pdf.

/*
int 4 byte= 32 bit

float 4 byte
    4.55(upto 7 decimal digits)

Double 8 bytes.
  4.44(upto 15 digits decimal)


Char size 1 byte.
with ASCCI value.


Bolean size 1 byte
  0 and 1;

  */


#include<bits/stdc++.h>
using namespace std;

int main(){

int a;
a=12;

cout<< "size of int : "<<sizeof(a)<<endl;

float b;
b= 15;

cout<< "size of float : "<<sizeof(b)<<endl;

double k;
k=1.11123;

cout<< "size of double : "<<sizeof(k)<<endl;


char c;
cout<< "size of character : "<<sizeof(c)<<endl;

bool d;
cout<< "size of bool : "<<sizeof(d)<<endl;


cout<< "Type modifier sizes are : "<<endl;

short int si;
long int li;

cout<< "size of short int : "<<sizeof(si)<<endl;

cout<< "size of long int : "<<sizeof(li)<<endl;


return 0;
}



/*
Type modifier :



signed size 4 byte

unsigned 4 byte.

long 8 byte.

short 2 bytes

*/





