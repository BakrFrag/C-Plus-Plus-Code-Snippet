#include<iostream>
using namespace std;
class Distance {
    private:
    int x,y;
    public:
    Distance():x(0),y(0){};
    Distance(int x, int y):x(x),y(y){};
    ~Distance() {
        cout<<"Object Died"<<endl;
    };
    void setx(int x){this->x=x;};
    void sety(int y){this->y=y;};
    void info() {cout<<this->x<<" "<<this->y<<endl;};

};
int main() {
    Distance d1;
    d1.setx(25);d1.sety(25);
    Distance d2(15,20);
    Distance d3(d2);
    d3.setx(500);
    d2.info();
    d3.info();
    Distance d4=d3;
    d4.sety(5000);
    d4.info();
return 0;
}