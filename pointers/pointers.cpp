#include<iostream>
using namespace std;

int main()
{
    int x=10;
    int* ptr;
    ptr = &x;
    *ptr += 40;
    cout<<x<<"\t"<<ptr<<endl;
}