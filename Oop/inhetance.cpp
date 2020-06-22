#include<iostream>
using namespace std; 
class person
{
    private: 
    string name="Not Definded";
    string gender="m";
    int age=10;
    public:
    person(){
        cout<<"Person Default Constructor"<<endl;
    };
    person(string n, string g, int age) {
        this->name=n;
        this->gender=g;
        this->age=age;
        cout<<"Person Parametrized Constructor"<<endl;
    };
    void set_age(int age){
        this->age=age;
    };
    void set_name(string name) {
        this->name=name;
    };
    void set_gender(string g) {
        this->gender=g;
    };
    void get_age() {
        cout<<this->age<<endl;
    };
    void get_name() {
        cout<<this->name<<endl;
    };
    void get_gender() {
        cout<<this->gender<<endl;
    };
    void display() {
        cout<<"name:"<<this->name<<"age:"<<this->age<<"gender:"<<this->gender<<endl;
    };

};
class student : public person {
    private:
    int level=0;
    string gpa="good";
    public:
    student(){
             cout<<"Student Default Constructor"<<endl;
    };
    student(string name,string gender,int age,int level,string gpa){
          person(name,gender,age);
          this->gpa=gpa;
          this->level=level;
          cout<<"Student Parametrized Constructor "<<endl;
    };

    void set_all(string name,string gender,int age){
        set_name(name);
        set_age(age);
        set_gender(gender);
    }
};

int main() {
   person p("Bk","Male",25);
   p.display();
   student s;
   student one("new","male",50,18,"Graduated");
   one.display();
   


}