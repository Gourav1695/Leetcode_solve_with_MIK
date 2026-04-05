class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>arr;
        for(int i = 1 ; i<= n;i++){
            arr.push_back(i);
        }
        int i = 0;
        while(arr.size()>1){
            int idx = (i+k-1)%arr.size();
            arr.erase(arr.begin()+idx);
            i = idx;
        }
        return arr[0];
    }
};

// tc -->O(n^2)
// sc -->O(n)


// ----------- Approach 2 : ----------------

class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>que;

        for(int i = 1; i<= n; i++){
            que.push(i);
        }

        while(que.size()>1){
            for(int i = 1; i<=k-1;i++){
                que.push(que.front());
                que.pop();
            }
            que.pop();
        }
       return que.front();
    }
};

// tc --> O(n*k)
// sc --> O(n)

// ----------------- Appraoch 3 : recurrsion (most optimal)------------
class Solution {
public:
    int findWinnerIdx(int n , int k){
        // base case
        if( n==1 ){
            return 0; // index of only one element left is 0
        }
        int idx = findWinnerIdx(n-1,k);
        idx = (idx+k)%n; // to find the original index in the original array
        return idx;
    }
    int findTheWinner(int n, int k) {
        int result_idx = findWinnerIdx(n,k);
        return result_idx+1;
    }
};

// tc -->O(n)
// sc -->O(1)
