class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0 ;
        for(auto it: patterns){
            if(word.contains(it)){
                count++;
            }
        }
        return count;
    }
};

// Time Complexity: O(n * m * w)
// Where:

// n = number of patterns
// m = average length of each pattern
// w = length of word

// sc -->O(1)
