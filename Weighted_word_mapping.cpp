class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        // simulation problem
        string st = "";

        for(auto it: words){
            int total = 0;
            for(auto ch: it){
                total+=weights[ch-'a'];
            }
            st += ('z'-(total%26));
        }
        return st;
    }
};

//T.C : O(W * n), W = total words, n = average length of each word
//S.C : O(1) (Not considering space for result)
