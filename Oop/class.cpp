#include<iostream>
using namespace std;

class Animal {
    private:
    string name;
    double height;
    double weight;
    static int number;
    public:
        void setname(string);
        string getname() {
            return this->name;
        };
        void setheight(double);
        double getheight() {
            return this->height;
        };
        void setweight(double);
        double getweight() {
            return this->weight;
        };
        void setall(string,double,double);
        Animal();
        ~Animal();
        void tostring();
        Animal(string,double,double);
        static int getnumber() { 
            return number;
        };

};
int Animal::number=0;
void Animal::setname( string name) {
    this->name=name;
};
void Animal::setweight(double weight) {this->weight=weight;};
void Animal::setheight(double height) {this->height=height;};
void Animal::setall(string name,double weight,double height) {
    this->name=name;
    this->weight=weight;
    this->height=height;
};
Animal::Animal() {

};
Animal::Animal(string name,double weight,double height) {
    this->name=name;
    this->height=height;
    this->weight=weight;
    number +=1;
};
void Animal::tostring() {
   cout<<"animal name "<<this->name<<"animal weight "
   << this->weight<<"animail height "<<this->height<<endl;
};
Animal::~Animal() {
    cout<<"Animal"<< this->name <<"destroyed"<<endl;
};
class Dog : public Animal {
     private:
     string type;
     public:
     Dog():Animal(){};
     string gettype();
     Dog(string,double,double,string);
     void tostring();
     ~Dog();

};
string Dog::gettype() {
         return this->type;
};
void Dog::tostring() {
   cout<<"name"<<this->getname()<<"type"<<this->gettype()<<endl;
};
Dog::Dog(string name,double weight,double height,string type){
    Animal(name,height,weight);
    this->type=type;
}
Dog::~Dog(){
    cout<<"Dog "<<this->getname()<<" died"<<endl;
};
int main() {
    // animal class
    // Animal a("an",105.123,147.159);
    // cout<<a.getnumber()<<endl;
    // a.tostring();
    // a.setname("New");
    // cout<<a.getname()<<"   "<<a.getnumber()<<endl;
    // cout<<"\n\n";
    // Animal b("second",14.8,15.8);
    // cout<<b.getnumber()<<endl;
    // b.tostring();
    // dog class
    Dog d("Dog",15.12,12.15,"Dog");
    cout<<d.getname()<<endl;
    cout<<d.gettype()<<endl;
    cout<<d.getweight()<<endl;
    cout<<d.getheight()<<endl;
    cout<<d.getnumber()<<endl;
    d.tostring();
    return 0;
}