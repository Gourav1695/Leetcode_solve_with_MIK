class Solution {
  public:
  vector<string>result;
  void solve(string &s, string &curr, int idx){
      // base case
      if(idx>=s.length()){
          if(curr!=""){
              result.push_back(curr);
          }
          return;
      }
      // do
      // recursion
      // undo
      curr.push_back(s[idx]);
      solve(s,curr, idx+1);
      curr.pop_back();
      solve(s,curr, idx+1);
      
  }
    vector<string> AllPossibleStrings(string s) {
        // Code here
        string curr = "";
        solve(s,curr,0);
        sort(result.begin(),result.end());
        return result;
    }
};

// tc -->O(2^n)
// sc-->O(n)
