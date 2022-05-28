//Queue using Stack
#include <bits/stdc++.h>
using namespace std;

int main()
{
   
    stack<int> s1;
    stack<int> s2;

    int n;
    cin>>n;
 
    for(int i = 0;i<n;++i){
        int x;
        cin>>x;

        if(s1.empty()){
            s1.push(x);
        }

        else{
           
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }

             s2.push(x);

            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
    }

    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    return 0;
}