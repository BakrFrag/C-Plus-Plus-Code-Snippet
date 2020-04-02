#include<iostream>
using namespace std;

class Animal {
    public:
    string name;
    double height;
    double weight;
    static int number;
    public:
        void setname(string);
        string getname() {
            return name;
        };
        void setheight(double);
        double getheight() {
            return height;
        };
        void setweight(double);
        double getweight() {
            return weight;
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
}

int main() {
    Animal a("an",105.123,147.159);
    cout<<a.getnumber()<<endl;
    a.tostring();
    a.setname("New");
    a.number=15;
    cout<<a.getname()<<"   "<<a.getnumber()<<endl;
    cout<<"\n\n";
    Animal b("s",14.8,15.8);
    cout<<b.getnumber()<<endl;
    return 0;
}