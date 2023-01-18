#include <bits/stdc++.h>
using namespace std;
//pass by address
void swapFunc(int *x,int *y)  //pointer takes address
{
    int temp;
    temp=*x;                  //to access the value of a,b need pointer
    *x=*y;
    *y=temp;
}
int main()
{
    int a=10,b=20;
    swapFunc(&a,&b);        //pass address instead of variable
    cout<<a<<" "<<b;        //prints 20 10
    return 0;
}
