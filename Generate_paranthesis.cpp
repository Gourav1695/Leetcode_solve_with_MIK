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
