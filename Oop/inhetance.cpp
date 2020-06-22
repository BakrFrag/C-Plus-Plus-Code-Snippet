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
        cout<<"name:"<<this->name<<endl;
        cout<<"age:"<<this->age<<endl;
        cout<<"gender:"<<this->gender<<endl;
    };

};
class student : public person {
    private:
    int level=0;
    string gpa="good";
    public:
    student(){
            
    };
    student(string name,string gender,int age,int level,string gpa):person(name,gender,age)
    {
          
          this->gpa=gpa;
          this->level=level;
          
    };

    void set_all(string name,string gender,int age){
        set_name(name);
        set_age(age);
        set_gender(gender);
    };
    void display(){
        person::display();
        cout<<"Level:"<<this->level<<endl;
        cout<<"GPA:"<<this->gpa<<endl;

    }
};

int main() {
   cout<<"Person Data"<<endl;
   person p("Bk","Male",25);
   p.display();
   cout<<"Student Data"<<endl;
   student one("new","male",50,18,"Graduated");
   one.display();
   


}