#include<iostream>
using namespace std;
class man {
    private:
      string name;
      string title;
      double age;
      
    public:
      friend void set();
      man(){
          this->name="classobj";
          this->title="obj";
          this->age=25.3;
          cout<<"object created"<<endl;
      };
      ~man() {
          cout<<"Man Object "<<this->name<<" destroyed"<<endl;
      }
      string getname() {
          return this->name;
      };
      void objectinfo(){
          cout<<"name "<<getname()<<endl;
          cout<<"title "<<this->title<<endl;
          cout<<"age "<<this->age<<endl;
      };
};
void set() {
man m;
m.name="Abou Bakr";
m.title="BK";
m.age=25.2;
m.objectinfo();
};
int main() {
    set();
    cout<<"______________________________________________"<<endl;
    man m;
    m.objectinfo();

    return 0;
}