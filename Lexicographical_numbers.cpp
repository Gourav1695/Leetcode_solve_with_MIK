class Solution {
public:
vector<int>result;
void solve(int curr, int n, vector<int>&result){
    if(curr>n){
        return;
    }
    result.push_back(curr);
    for(int append = 0; append<=9; append++){
        int newNum = curr*10+ append;

        if(newNum>n)
        return;
        solve(newNum, n, result);
    }
}
    vector<int> lexicalOrder(int n) {
        for(int i = 1; i<=9;i++){
        solve(i, n, result);
        }
        return result;
    }
};

// tc -->O(n)
// sc -->O(logbase10n), as depth of the recursion tree is the number of digits that is required which is log to the base 10 n.
