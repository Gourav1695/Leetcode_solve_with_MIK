class Solution {
public:

    int findSum(int num)
    {
        int sum = 0;
        int divCount = 0;
        for(int fact = 1; fact<=sqrt(num); fact++)
        {
         if(num%fact==0)
            {
                
                int other = num/fact;
                if(fact==other)
                {
                    divCount += 1;
                    sum +=fact;
                }
                else{
                    divCount +=2;
                    sum+=(fact+other);
                }
            }
            if(divCount>4){
                return 0;
            }    
        }
        return divCount==4?sum:0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int result = 0;
        for(auto & num: nums)
        {
            result+= findSum(num);
        }
        return result;
    }
};

// tc -->O(n*sqrt(nums));
// sc -->O(1)
