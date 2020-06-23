#include<iostream>
using namespace std;
class student {
    string name;
    string department;
    public:
    student(){
        cout<<"Student Constructor"<<endl;
    };
    student(string n,string d):name(n),department(d){};
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Department:"<<department<<endl;
    }
};
class employee {
    float salary;
    public:
    employee(){cout<<"Employee Default Constructor"<<endl;}
    employee(float s):salary(s){};
    void display(){
        cout<<"Salary:"<<salary<<endl;
    };
};

class mul:public student , public employee{
    public:
    mul() {cout<<"mul default constructor"<<endl;}
    mul(string n,string d,float s):student(n,d),employee(s){};
    /* 
    void display() {
    student::display();
    employee::display();   
    };
    */
};
int main(){
 mul m("BK","Data",8500);
 m.student::display();
 m.employee::display();
}