/*Given a positive integer denoting n, do the following:

If 1<=n<=9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
If n>9, print Greater than 9.
*/
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
   std::string num[10]={"one","two","three","four","five","six","seven","eight","nine","Greater than 9"};
   int n,i;
   cin>>n;
   if(n>=1&&n<=9)
   {
      cout<<num[n-1]<<endl;
   } 
   else if(n>9)
   {
       cout<<num[9]<<endl;
   }
}