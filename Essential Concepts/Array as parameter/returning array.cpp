#include <bits/stdc++.h>
using namespace std;
//Passing array into a function
int * arrayReturning(int a)        //Make the function return address with *
{
    int *p;
    p=new int[a];                   //Creating a five space array in the heap memory and storing its address
    return p;                       //Returning the address
}

int main()
{
    int *a;
    a=arrayReturning(5);            //Now a holds the address of the array created on heap memory from p, p is destroyed
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=5;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
