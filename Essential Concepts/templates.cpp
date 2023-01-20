#include <bits/stdc++.h>
using namespace std;

//Template mean generic class, here data type is generic
template<class T>                   //declare it as template
class arithametic{
private:
    T num1;
    T num2;

public:
    arithametic(T num1,T num2);
    T add();
    T sub();

};

template<class T>
arithametic<T>::arithametic(T num1,T num2)      //constructor
{
    this->num1=num1;
    this->num2=num2;
}
template<class T>
T arithametic<T>::add()                 //change the type of function as well
{
    T sum;
    sum=num1+num2;
    return sum;
}
template<class T>
T arithametic<T>::sub()
{
    T mus;
    mus=num1-num2;
    return mus;
}

int main()
{
    arithametic<int> ar(10,5);
    cout<<ar.add()<<endl;
    arithametic<float> ar1(11.11,5.0);
    cout<<ar1.add()<<endl;
    return 0;
}
