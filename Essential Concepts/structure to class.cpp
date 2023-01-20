#include <bits/stdc++.h>
using namespace std;

/*
struct rectangle{
    int length;
    int breadth;
};
void initialize(struct rectangle *r1,int l,int b)       //r1 is now an alias of r, now it works as a monolithic program
{
    r1->length=l;
    r1->breadth=b;                      //to access address use r1-> for pointer & changing values will change r's properties
}
int area(struct rectangle r1)
{

    return r1.length*r1.breadth;
}
void changeLength(struct rectangle *r1, int newLenght)
{
    r1->length=newLenght;
}

int main()
{
    struct rectangle r;
    initialize(&r,5,5);                 //length 5, breadth 5
    cout<<r.length<<" "<<r.breadth<<endl;
    cout<<area(r)<<endl;                //25
    changeLength(&r,10);
    cout<<r.length<<" "<<r.breadth;     //length 10, breadth 5
    return 0;
}
*/

class rectangle{
private:
    int length;
    int breadth;

public:
    rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
    void changeLength(int newLength)
    {
        length=newLength;
    }
    void printLenghtBreadth()
    {
        cout<<length<<" "<<breadth<<endl;
    }

};
int main()
{
    rectangle r(5,5);
    r.printLenghtBreadth();
    int area=r.area();
    cout<<area<<endl;
    r.changeLength(10);
    r.printLenghtBreadth();

}
