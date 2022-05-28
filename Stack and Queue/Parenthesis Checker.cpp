#include <bits/stdc++.h>
using namespace std;

unordered_map<char,int> mp = {{'(', -1},{'{', -2},{'[', -3},{']', 3},{'}', 2},{')', 1}};

bool is_valid(string s)
{

    stack<char> st;

    for(auto vals: s)
    {
       if(mp[vals] < 0){
        st.push(vals);
       }

       else{
        if(st.empty() and mp[vals] > 0){
            return false;
        }

        if(mp[vals] > 0){
            if(mp[vals] + mp[st.top()] != 0){
                return false;
            }
            else{
                st.pop();
            }
        }
       }
    }
  
   if(!st.empty()) return false;
   return true;
}

int main()
{

    string s;
    cin>>s;

    cout<<is_valid(s)<<"\n";

    return 0;
}