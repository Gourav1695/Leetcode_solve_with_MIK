class Solution {
public:
    int minPartitions(string n) {
       char res = *max_element(n.begin(),n.end());
       return res -'0'; 
    }
};

// tc->O(n)
// sc -->O(1)
