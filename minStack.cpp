#include<bits/stdc++.h>
using namespace std;
class MinStack {
    stack<pair<int,int>> s;
    int mini;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty())
        {
            mini = val;
        }
        else
        {
            mini = min(val,s.top().second);
        }
        s.push({val,mini});
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};