class Solution {
public:
    int binaryGap(int nums) {
        bitset<32>b(nums);
        string x;
        x = b.to_string().substr(b.to_string().find('1'));
  
        int n = x.size();
        int gap = 0;
        int i = 0;
            for(int j = i ; j<n;j++)
            {
                if(x[i]==x[j] && x[i]=='1'){
                    gap = max(gap, j - i);
                    i = j;
                }
            }
        
        return gap;
    }
};

// tc -->O(n)
// sc -->O(1)

// ------------- appraoch 2 : optimal:-------
class Solution {
public:
    int binaryGap(int n) {
        int pos = 0;
        int last = -1;
        int ans = 0;

       while(n>0)
       {
            if(n&1){
                if(last!=-1){
                ans = max (ans, pos - last);
                }
                last = pos;
            }
            pos++;
            n = n>>1;
       }
       return ans;
    }
};

// tc -->O(1)
// sc -->O(1)
