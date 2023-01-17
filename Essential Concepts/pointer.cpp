#include <bits/stdc++.h>
using namespace std;
/*pointer points to the address of a variable,it holds address
why need pointer-
Accessing heap section of the memory
Accessing resources out of the program
Parameter passing*/
int main()
{
    int a=10;                   //Normal variable
    int *p;                     //Declaration of pointer variable, which will be in the stack section of the main memory
    p=&a;                       //Pointer variable getting the value of a variable's address
    cout<<*p<<endl;             //To access the value use * then the variable
    //To create variable in the heap section
    //p=(int*)malloc(5*sizeof(int));            //For c lang it will create an array of five integer in the heap section
    p=new int[5];               //For c++ lang
    return 0;
}
