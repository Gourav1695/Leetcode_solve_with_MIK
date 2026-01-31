class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // if we find the ans letter in letter arr then return from there
        // else return the first element in the letters we can't 
        //find the solution;

        for(auto &it: letters){
            if(it>target){
                return it;
            }
        }
        return letters[0];
    }
};
// tc -->O(n)
// sc -->O(1)
