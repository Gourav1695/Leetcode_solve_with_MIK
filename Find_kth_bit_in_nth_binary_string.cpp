class Solution {
public:
    char findKthBit(int n, int k) {
        
        // 3 cases:
        // 1. for case k < ceil[length/2].
        // 2. for case k = ceil[length/2].
        // 3. for case k > ceil[length/2].

        int length = (1<<n) - 1; // pow(2,n)

        // base case 
        if(length == 1){
            return '0';
        }

        if(k<ceil(length/2.0)){
            return findKthBit(n-1,k);
        }
        else if ( k == ceil(length/2.0)){
            return '1';
        }
        else{
            char ch = findKthBit(n-1,length-(k-1));
            return (ch == '0')? '1': '0' ;
        } 
    }
};
// tc -->O(n)
// sc -->O(n)
