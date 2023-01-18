#include <bits/stdc++.h>
using namespace std;
//pass by value
void swapFunc(int x,int y)  //void function has no return
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a=10,b=20;
    swapFunc(a,b);
    cout<<a<<" "<<b;        //no change
    return 0;
}
