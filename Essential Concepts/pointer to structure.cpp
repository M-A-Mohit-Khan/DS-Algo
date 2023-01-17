#include <bits/stdc++.h>
using namespace std;
//Using pointer to access structure
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle r;             //Declaring structure r rectangle
    struct rectangle *p;            //Declaring structure pointer *p rectangle, stored into stack of main memory
    p=&r;                           //assigning r's address to pointer p
    p->length=10;                   //to access r's property through pointer p use -> sign
    p->breadth=10;
    cout<<p->length<<endl<<p->breadth<<endl;
    //Now dynamically
    struct rectangle *pntr;         //In the stack
    pntr=new struct rectangle;      //Creating a structure or object of rectangle in the heap section and pntr is pointing to it
    pntr->length=20;
    pntr->breadth=15;
    cout<<pntr->length<<endl<<pntr->breadth<<endl;
    return 0;
}
