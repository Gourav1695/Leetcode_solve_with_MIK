class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        int maxEl = *max_element(nums.begin(),nums.end())+k;
        vector<int>freq(maxEl+1,0);

        for(auto &num:nums)
        {
            freq[num]++;
        }
        // cumalative sum will do below
        for(int i = 1; i<freq.size();i++)
        {
            freq[i]+=freq[i-1];
        }

        int result = 0;
        for(int target = 0 ; target<=maxEl;target++)
        {
            if(freq[target]==0)
            {
                continue;
            }
            int leftEl = max(0,target - k);
            int rightEl = min(maxEl,target + k);

            int totalfreq = freq[rightEl]-((leftEl>0)?freq[leftEl-1]:0);
            int targetfreq = freq[target]-((target>0)?freq[target-1]:0);
            int remainfreq = totalfreq - targetfreq;
            int possiblefreq = min(remainfreq,numOperations);
            result = max(result, targetfreq+possiblefreq);
        }
        return result;
    }
};

// tc --> O(maxEl)
// sc --> O(maxEl)
