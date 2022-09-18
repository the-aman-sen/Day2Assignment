#include<iostream>
using namespace std;

int main()
{
    int a1,a2,a3;

    cout<<endl<<"Enter the values of all three angles of a triangle";

    cin>>a1>>a2>>a3;

    if(a1+a2+a3==180)
    {
        cout<<"The triangle is  a valid triangle";
    }
    else
        cout<<"The triangle is not a valid triangle";

    return 0;
}