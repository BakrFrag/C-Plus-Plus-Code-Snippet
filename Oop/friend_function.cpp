#include<iostream>
using namespace std;
class person {
    private:
    double age;
    string gender;
    string name;
    public:
    person(){
    cout<<"Person Object Created Default Constructor";
    };
    person(string n,string g, double age):name(n),age(age),gender(g){};
    void setname(string n){
        this->name=name;
    };
    void getname(){
        cout<<this->name<<endl;
    };
    // friend function not a member function and not inhertited
    friend void objectinfo(person p);
};
void objectinfo(person prn) {
    cout<<"name:"<<prn.name<<endl;
    cout<<"Age:"<<prn.age<<endl;
    cout<<"Gender:"<<prn.gender<<endl;
};
int main() {
    person p;
    p.setname("Bk");
    objectinfo(p);
    person son("Bakr","Male",25);
    objectinfo(son);
}