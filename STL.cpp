#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    //syntax of vector declaration is, vector<datatype>name(size);
    int n;
    cin>>n;
    set<int> st;
    for(int i=0;i<n;i++)
    {
        st.insert(i);
    }
    for(auto i:st)
    cout<<i<<" ";
    cout<<endl;
    st.erase(1);
    st.erase(2);
    for(auto i:st)
    cout<<i<<" ";
    return 0;

 }