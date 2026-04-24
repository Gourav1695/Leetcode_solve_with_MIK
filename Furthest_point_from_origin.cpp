class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int countR=0;
        int countL=0;
        int count_=0;
        for(int i = 0; i<moves.size(); i++){
            if(moves[i]=='R')
            countR++;
            if(moves[i]=='L')
            countL++;
            if(moves[i]=='_')
            count_++;
        }
        return abs(countR-countL) + count_;
    }
};

// tc -->O(n)
// sc -->O(1)
