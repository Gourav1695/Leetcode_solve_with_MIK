class Solution {
public:
    vector<string> result;
    bool isValid(string curr){
        int count = 0;
        for(auto it: curr){
            if(it=='('){
                count++;
            }
            else{
                count--;
                if(count<0) return false;
            }
        }
        return count==0? true: false;
    }
    void solve(string curr, int n)
    {
        if(curr.length()==2*n){
            if(isValid(curr)){
                result.push_back(curr);
            }
            return;
        }
        curr.push_back('(');
        solve(curr, n);
        curr.pop_back();
        curr.push_back(')');
        solve(curr, n);
        curr.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        solve("",n);
        return result;
    }
};

// tc --> O(2^(2n) * 2n)
// sc --> O(2*n) // depth of the recursion tree;

// --------------- Approach 2: --------------------
class Solution {
public:
    vector<string> result;

    void solve(string curr, int n, int open, int close)
    {
        if(curr.length()==2*n){
            result.push_back(curr);
            return;
        }

        curr.push_back('(');
        if(open<n){
        solve(curr, n,open+1, close);
        }
        curr.pop_back();
        curr.push_back(')');
        if(close<open){
        solve(curr, n,open,close+1);
        }
        curr.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        solve("",n,0,0);
        return result;
    }
};

// tc --> O(2^(2n)) or catalan number -->O(4^n/sqrt(n))
// sc --> O(2*n) // depth of the recursion tree;
