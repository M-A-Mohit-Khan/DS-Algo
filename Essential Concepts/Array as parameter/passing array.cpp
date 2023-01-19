#include <bits/stdc++.h>
using namespace std;
//Passing array into a function
void arrayPassing(int arr[],int b)        //Passing array mean taking its address
{
    for(int i=0;i<5;i++)
    {
        arr[i]=10-i;                       //Changing values
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    //Calling the function, when called add function activation record or stack frame is created, when the function calling terminates stack frame also terminates
    arrayPassing(arr,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;                //Values will be changed because array was passed as an address
    }

    return 0;
}
