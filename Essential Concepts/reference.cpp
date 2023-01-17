#include <bits/stdc++.h>
using namespace std;
//Reference is like a nickname of a variable or alias
int main()
{
    int a=10;
    int &r=a;                   //now a and r have the same value 10, or them share the same value
    cout<<r<<endl;              //prints 10
    r++;                        //now both a and r have value 11
    cout<<a<<endl;              //prints 11
    return 0;
}
