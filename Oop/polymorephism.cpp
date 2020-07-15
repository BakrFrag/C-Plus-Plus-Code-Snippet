#include<iostream>
using namespace std;
class shape {
    string color;
    public:
    shape(){
        cout<<"Shape Class Object"<<endl;
    }
    shape(string c):color(c){};
    virtual void area() {
        cout<<"Area Of Base Class"<<0<<endl;
    };
    virtual void draw() {
        cout<<"Area Of Base Class Within Color"
        <<color<<endl;
    };
    virtual void erase() {
        cout<<"Erase From Base Class"<<endl;
    };
};
class rectangle : public shape {
    private:
    int length;
    int width;
    public:
    rectangle(int l , int w , string c):shape(c),
    length(l),width(w){};
    void area() {
        cout<<"area of rectangle class"<<length*width<<
        endl;
    };
    void draw() {
        cout<<"draw from rectangle class "<<endl;
    };
    void erase() {
        cout<<"erase from rectangle class"<<endl;
    };
};

int main() {
    shape* ptr;
    shape hp;
    rectangle rec(12,15,"green");
    ptr=&hp;
    ptr->area();
    ptr=&rec;
    ptr->area();

}