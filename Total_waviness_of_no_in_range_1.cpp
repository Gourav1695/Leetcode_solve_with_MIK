class Solution {
public:
    int waveScore(string s){
        int count=0;
        if(s.length()<=2){
            return 0;
        }
        for(int i = 1; i<=s.length()-2;i++){
            if(s[i]>s[i-1] && s[i]>s[i+1]){
                count++;
            }
            if(s[i]<s[i-1] && s[i]<s[i+1]){
                count++;
            }
        }
        return count;
    }
    int totalWaviness(int num1, int num2) {
        int sum = 0;
        string s;
        for(int i = num1; i<=num2; i++){
            s = to_string(i);
            sum+=waveScore(s);
        }
        return sum;
    }
};
// tc -->O((num2-num1)log(num2))
// sc -->O(log(num2))
