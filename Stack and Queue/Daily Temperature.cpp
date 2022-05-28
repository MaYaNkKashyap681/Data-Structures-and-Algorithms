#include <bits/stdc++.h>
using namespace std;


void daily_temp(vector<int> v,vector<int> &ans)
{
    int _size = v.size();

    stack<pair<int,int>> st;

    for(int i = _size - 1;i>=0;--i){
        int x = v[i];

        if(st.empty()){A
            ans.push_back(0);
        }

        else{ 
            if(x <= st.top().first ){
                ans.push_back(1);
            }
            else{
                // int cnt = 1;
                while(!st.empty() && st.top().first < x){
                    // cnt++;
                    st.pop();
                }

                if(st.empty()){
                    ans.push_back(0);
                }
                else{
                    ans.push_back(st.top().second - i);
                }
            }

        }
        st.push({x,i});
    }
}

int main()
{
   
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i = 0;i<n;++i){
        cin>>v[i];
    }

    vector<int> ans;

    daily_temp(v,ans);

    reverse(ans.begin(),ans.end());

    for(auto vals: ans) {
        cout<<vals<<" ";
    }

    return 0;
}