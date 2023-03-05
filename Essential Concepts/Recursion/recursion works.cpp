#include <bits/stdc++.h>
using namespace std;

//Recursion for calling
void fun1(int n)
{
    if(n>0)
    {
        cout<<n<<endl;		//outputs 3 2 1
        fun1(n-1);
    }
}

//Recursion for calling back
void fun2(int n)
{
    if(n>0)
    {
        fun2(n-1);
        cout<<n<<endl;      //prints after calling back, outputs 1 2 3
    }
}


int main()
{
    int n=3;
    fun1(n);
    fun2(n);
    return 0;
}
