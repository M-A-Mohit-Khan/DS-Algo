#include <bits/stdc++.h>
using namespace std;
//Creating structure for cards
//It will be stored on stack section of the main memory
struct card
{
    int face;
    int shape;
    int color;
};
int main()
{
    struct card r;                  //Declaring one for card structure
    //Assigning value
    r.face=1;
    r.shape=0;
    r.color=0;
    cout<<r.face<<endl<<r.shape<<endl<<r.color<<endl;   //Accessing and printing
    //Creating array of structure
    struct card deck[2]={{1,0,1},{0,1,1}};    //Array for two cards
    for(int i=0;i<2;i++)
    {
        cout<<deck[i].face<<endl;   //Accessing and printing each array and array's value
        cout<<deck[i].shape<<endl;
        cout<<deck[i].color<<endl;
    }
    return 0;
}
