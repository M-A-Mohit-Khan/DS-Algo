#include <bits/stdc++.h>
using namespace std;
//pass by ref(c++) only
//now swapFunc gets one with main function, monolithic program
void swapFunc(int &x,int &y)  //void function has no return
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
    cout<<a<<" "<<b;        //prints 20 10
    return 0;
}
