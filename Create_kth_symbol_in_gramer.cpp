class Solution {
public:
    int kthGrammar(int n, int k) {
        // base case
        if(n==1 && k ==1){
            return 0;
        }
        int length = pow(2,n-1);
        int mid = length/2;
         // resursive step
         if(k<=mid){
            return kthGrammar(n-1,k);
         }
         else{
            return 1- kthGrammar(n-1,k-mid);
         }
    }
};

// tc -->O(n)
// sc -->O(1), but O(n) if we consider recursion stack of recursion.
