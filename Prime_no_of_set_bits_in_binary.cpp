class Solution {
public:
    bool isPrime(int n){
        if(n<=1){
            return false;
        }
        for(int i = 2; i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        int x = 0;
        for(int i = left; i<=right; i++){
            x = __builtin_popcount(i);
            cout<<x<<" ";
            if(isPrime(x)){
                count++;
            }
        }
        return count;
    }
};

// tc -->O(n*sqrt(m))
// sc -->O(1)
// --------------- Appraoch 2:---------------

class Solution {
public:
    bool isPrime(int n){
        if(n<=1){
            return false;
        }
        for(int i = 2; i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        set<int>st={2,3,5,7,11,13,17,19};
        int count = 0;
        int x = 0;
        for(int i = left; i<=right; i++){
            x = __builtin_popcount(i);
            cout<<x<<" ";
            if(st.count(x)){
                count++;
            }
        }
        return count;
    }
};

// tc -->O(k), here k is right-left+1
// sc -->O(1)
