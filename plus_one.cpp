class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i = n-1;i>=0;i--)
        {
            if(digits[i]==9)
            {
                digits[i]=0;
            }
            else{
                digits[i]++;
                return digits;
            }
        }

        // for cases like 9 , 999 etc.
        digits.insert(begin(digits),1);
        return digits;
    }
};

// tc -->O(n)
// Space Complexity is O(1) auxiliary space and O(n) including output.
