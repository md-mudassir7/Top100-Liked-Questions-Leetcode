#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]==']'){
                string temp = "";
                while(!st.empty() && st.top()!='[')
                {
                    temp+=st.top();
                    st.pop();
                }
                reverse(temp.begin(),temp.end());
                if(!st.empty() && st.top()=='[')
                    st.pop();
                string n = "";
                while(!st.empty() && (st.top()-'0'>=0) && (st.top()-'0'<10))
                {
                    n+=st.top();
                    st.pop();
                }
                reverse(n.begin(),n.end());
                int d = stoi(n);
                cout<<d<<endl;
                for(int i=0;i<d;i++){
                    for(int j=0;j<temp.size();j++){
                        st.push(temp[j]);
                    }
                }
            }
            else
                st.push(s[i]);
        }
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};