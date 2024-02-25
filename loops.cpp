/*For each integer n in the interval [a,b] (given as input) :

If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
Else if  n>9and it is an even number, then print "even".
Else if  n>9and it is an odd number, then print "odd".
Note: [a,b]={x belongs to Z| a<=x<=b}={a,a+1,....,b}*/
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
   std::string num[10]={"one","two","three","four","five","six","seven","eight","nine"};
   int a,b,i;
   cin>>a>>b;
   for(i=a;i<=b;i++)
   {
       if(i>=1 && i<=9)
       {
           cout<<num[i-1]<<endl;
       }
       else if(i>9)
       {
           if(i%2==0)
           {
               cout<<"even"<<endl;
           }
           else if(i%2!=0)
           {
               cout<<"odd"<<endl;
           }
       }
   }
}
   
