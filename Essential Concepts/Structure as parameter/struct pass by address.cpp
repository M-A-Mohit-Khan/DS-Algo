#include <bits/stdc++.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};
void changeLength(struct rectangle *r1,int newLegnth)       //r1 is now an alias of r, now it works as a monolithic program
{
    r1->length=5;                       //to access address use r1-> for pointer & changing values will change r's properties
}
int main()
{
    struct rectangle r={10,5};
    changeLength(&r,5);
    cout<<r.length<<" "<<r.breadth;     //length 5, breadth 5
    return 0;
}
