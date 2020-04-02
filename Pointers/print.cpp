#include<iostream>
#include <typeinfo>
using namespace std;
int main() {
float value=(int)15.123;
cout<<"Value : "<<float(value)<<endl;
cout<<"\n"<<endl;
value=12;
cout<<"\n"<<typeid(value).name()<<endl;
return 0;
};