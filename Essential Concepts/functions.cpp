#include <bits/stdc++.h>
using namespace std;
//Prototype function
int add(int a,int b)        //Formal parameters
{
    int c=a+b;
    return c;
}
//Block called definition of a function
int main()
{
    int x,y,c;
    x=10,y=20;
    //Actual parameter
    c=add(x,y);             //Calling the function, when called add function activation record or stack frame is created
    cout<<c;

    return 0;
}
