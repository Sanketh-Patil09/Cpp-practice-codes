/*Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b. Set the value of a' to their sum, and b' to their absolute difference. There is no return value, and no return statement is needed.
i.e.
a'=a+b
b'=|a-b|*/
#include <iostream>
#include <cstdio>
using namespace std;


void update(int *a,int *b) 
{
    int temp=*a;
   *a= *a + *b;
   *b=temp-*b;
   if(*b<0)
   {
       *b=-(*b);
   }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<endl<<b;

    return 0;
}