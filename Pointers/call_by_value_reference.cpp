#include<iostream>
using namespace std;
int square(int n) {
    return n*n;
};
void squareit(int *n) {
    *n *= *n;
};
int main() {
    int n=10;
    int s=square(n);
    cout<<n<<s<<endl;
    int n2=20;
    cout<<n2<<endl;
    squareit(&n2);
    cout<<n2<<endl;


}