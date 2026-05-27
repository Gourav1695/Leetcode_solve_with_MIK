class Solution {
public:
    int numberOfSpecialChars(string word) {
        int freq[123] = {0}; // freq arr
        int count = 0;
        for(auto it: word){
            freq[it]++; // a to z 97 to 122 , A to Z 65 to 90
        }
        for(int i = 97 ; i<123; i++){
            int capIdx =  i-32;
            if(freq[i]>0 && freq[capIdx]>0){
                count++;
            }
        }
        return count;
    }
};

// tc -->O(n)
// sc -->O(1)

// ---------- second Appraoch-----------------
class Solution {
public:
    int numberOfSpecialChars(string word) {
        int freq[123] = {0}; // freq arr
        int count = 0;
        for(auto it: word){
            freq[it]++; // a to z 97 to 122 , A to Z 65 to 90
        }
        for(int i = 'a' ; i<='z'; i++){
            int capIdx =  i-'a'+'A';
            if(freq[i]>0 && freq[capIdx]>0){
                count++;
            }
        }
        return count;
    }
};

// tc -->O(n)
// sc -->O(1)
