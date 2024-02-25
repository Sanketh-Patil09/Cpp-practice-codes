//Take input of different data types i.e. int, long, char, double, float. and print each data type in each line and set the pricision of float to 3 decimal points and double to 9 decimal points
#include <iostream>
#include <cstdio>
#include <iomanip>;
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl<<b<<endl<<c<<endl;
    std::cout<<std::fixed<<std::setprecision(3)<<d<<endl;
    std::cout<<std::fixed<<std::setprecision(9)<<e<<endl;
    return 0;
}
