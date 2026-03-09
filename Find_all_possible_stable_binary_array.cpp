class Solution {
public:

    int M = 1e9 + 7;
    int t[201][201][2];
    int solve(int LeftZeros, int LeftOnes,bool prevOnes, int limit){
        int result=0;
        // base case
        if(LeftOnes == 0 && LeftZeros == 0){
            return 1;
        }
        if(t[LeftZeros][LeftOnes][prevOnes]!=-1){
            return t[LeftZeros][LeftOnes][prevOnes];
        }
        if(prevOnes == true){ // exproling zeros
            for(int len = 1 ; len<= min(LeftZeros,limit); len++){
                result = ( result + solve(LeftZeros-len, LeftOnes, false, limit))%M;
            }
        }
         else{ // exproling ones
            for(int len = 1 ; len<= min(LeftOnes,limit); len++){
                result = ( result + solve(LeftZeros,LeftOnes- len, true, limit))%M;
            }
        }
        return t[LeftZeros][LeftOnes][prevOnes] = result%M;
    }
    int numberOfStableArrays(int zero, int one, int limit) {
        // memset
        // case for startwithone
        // case for startwithzero
        // result would be startwithone + startwithzero;
        // will create solve function
        // base case
        // recursion for ones and zeros
        memset(t, -1,sizeof(t));
        int startwithOnes = solve(zero, one, false, limit);
        int startwithZeros = solve(zero, one, true, limit);
        return (startwithOnes + startwithZeros)%M;
    }
};

// tc -->O(one * zero* limit) , here one * zero state are there and for each step we have to do limit operation in for loops
// sc --> O(one * zero )
