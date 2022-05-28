//Stack using Queue

#include <bits/stdc++.h>
using namespace std;

int main()
{
   
    //In Stack using Queue and Queue using Stack you need two Instances

    queue<int> q1;
    queue<int> q2;

    int n;
    cin>>n;

    for(int i = 0;i<n;++i){
      int x;
      cin>>x;

    if(q1.empty()) q1.push(x);

    else{
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    }

    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    
    return 0;
}