#include<iostream>
using namespace std;
class Person {
  private:
  string gender;
  string name;
  public:
  Person(){
    cout<<"Default Constructor"<<endl;
  };
  Person(string n,string gender):name(n),gender(gender){};
  // friend class friendperson is friend for person
  // but person class is not friend for friendperson
  friend class friendperson;
};
class friendperson {
  public:
  void display(Person p){
    cout<<"Object:"<<p.name<<endl;
  };
};

int main() {;
Person p;
friendperson fp;
fp.display(p);
Person p2("Bk","Male");
fp.display(p2);
Person anthor=p;
fp.display(anthor);
Person also=p2;
fp.display(also);
}