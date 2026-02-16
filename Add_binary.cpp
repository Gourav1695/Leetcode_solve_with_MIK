class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        int i = a.size()-1;
        int j = b.size()-1;
        string result;
        while(i>=0 ||j>=0)
        {
            int sum = 0;
            sum = carry + ((i>=0)?a[i] - '0':0) + ((j>=0)?b[j] - '0':0);
            i--;
            j--;
            carry = (sum>1) ? 1:0;
            result.push_back((sum%2)==0?'0': '1');

        }
        if(carry ==1){
            result.push_back('1');
        }
        reverse(result.begin(),result.end());
        cout<<result;
        return result;
    }
};

// tc -->O(max(m,n))
// sc -->O(max(m,n))
