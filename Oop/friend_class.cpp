#include<iostream>
using namespace std;
class man {
    private:
      string name;
      string title;
      double age;
    friend class human;
};
class human {
   public:
   void show() {
       man m;
       m.name="new";
       m.title="new";
       m.age=25.3;
       cout<<m.name<<"\t"<<m.title<<"\t"<<m.age<<endl;

   };
   void display() {
       man m;
       m.name="anthor";
       m.title="one";
       m.age=25.3;
       cout<<m.name<<"\t"<<m.title<<"\t"<<m.age<<endl;
   };
};
int main() {
  human h;
  h.show();
  h.display();
};