#include <bits/stdc++.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};
int area(struct rectangle &r1)       //r1 is now an alias of r, now it works as a monolithic program
{
    return r1.length*r1.breadth;    //access by r1. & changing values will change r's properties
}
int main()
{
    struct rectangle r={10,5};
    cout<<area(r);
    return 0;
}
