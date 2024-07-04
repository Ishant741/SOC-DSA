#include<iostream>
#include<stack>
using namespace std;

class MyQueue {
public:
    stack<int> first , second;
    MyQueue() {
        
    }
    
    void push(int x) {
        first.push(x);
    }
    
    int pop() {
        while(!first.empty())
        {
            second.push(first.top());
            first.pop();
        }
        
        int ans = second.top();
        second.pop();
        while(!second.empty())
        {
            first.push(second.top());
            second.pop();
        }
        return ans;
    }
    
    int peek() {
        while(!first.empty())
        {
            second.push(first.top());
            first.pop();
        }
        int ans = second.top();
        while(!second.empty())
        {
            first.push(second.top());
            second.pop();
        }
        return ans;
    }
    
    bool empty() {
        return first.empty();
    }
};