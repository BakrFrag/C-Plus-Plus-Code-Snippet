#include<iostream>
using namespace std;
int main() {

    int var = 20;
    int *ptr= &var;
    cout<<"var address : "<<&var<<endl;
    cout<<"Pointer : "<<ptr<<endl;
    cout<<"var value"<<var<<endl;
    cout<<"pointer value"<<*ptr<<endl;
};