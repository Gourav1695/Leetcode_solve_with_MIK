#include <iostream>
#include <stack>
using namespace std;

void insertBottom(stack<int>&s, int x){
    // base case 
    if(s.empty()){
        s.push(x);
        return;
    }
    int top = s.top();
    s.pop();
    insertBottom(s,x);
    s.push(top);
}
void reverse(stack<int>&s){
    // base case
    if(s.empty()){
        return;
    }
    int top = s.top();
    s.pop();
    reverse(s);
    insertBottom(s,top);
}

int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3); 
    s.push(4);
    s.push(5);
     
    reverse(s);
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout<<'\n';
        return 0;
    }
// tc --> O(n^2) in worst case when the stack is already reversed, otherwise O(n)
// sc --> O(n) for the recursive call stack, O(1) for the auxiliary space
