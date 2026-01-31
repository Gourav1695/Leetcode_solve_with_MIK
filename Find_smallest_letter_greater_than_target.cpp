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

// -------------------- Binary Search approach: -----------------
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // binary search Implementation
        int l = 0;
        int r = letters.size()-1;
        
        int position = -1;
        while(l<=r){
            int mid = l+ (r-l)/2;
            if(letters[mid]>target){
                r = mid-1;
                position= mid;
            }
            else{
                l = mid+1;
            }
        }
        cout<<position<<endl;
        if(position==-1){
            return letters[0];
        }
        return letters[position];

    }
};

// tc -->O(logn)
// sc -->O(1)
