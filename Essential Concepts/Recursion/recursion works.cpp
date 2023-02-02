#include <bits/stdc++.h>
using namespace std;

//Recursion for calling
void fun1(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun1(n-1);
    }
}

//Recursion for calling back
void fun2(int n)
{
    if(n>0)
    {
        fun2(n-1);
        cout<<n<<endl;      //prints after calling back
    }
}


int main()
{
    int n=3;
    fun1(n);
    fun2(n);
    return 0;
}
