#include <bits/stdc++.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};
int area(struct rectangle r1)       //r1 is a new struct which will copy all the properties from r that is passed
{
    return r1.length*r1.breadth;    //access by r1. & changing values will not change r's properties
}
int main()
{
    struct rectangle r={10,5};
    cout<<area(r);
    return 0;
}
