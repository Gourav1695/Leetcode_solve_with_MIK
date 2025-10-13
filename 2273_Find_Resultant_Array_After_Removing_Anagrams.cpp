class Solution {
public:
    bool anagram(string s1, string s2){
      int arr[26]={0};
      for(int i = 0 ; i<s1.size() ;i++)
      {
        arr[s1[i]-'a']++;
      }
      for(int i = 0 ;i<s2.size();i++)
      {
        arr[s2[i]-'a']--;
      }
      for(int i =0 ; i<26;i++)
      {
        if(arr[i]!=0){
            return false;
        }
      }
      return true;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>result;
        result.push_back(words[0]);
        for(int i = 1; i<words.size();i++)
        {
            if(!anagram(result.back(),words[i])){
                result.push_back(words[i]);
            }
        }
        return result;
    }
};

// tc -->O(n*k)
// sc --> O(1)


// with main function

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool anagram(string s1, string s2){
        int arr[26]={0};
        for(int i = 0 ; i < s1.size(); i++)
        {
            arr[s1[i]-'a']++;
        }
        for(int i = 0 ; i < s2.size(); i++)
        {
            arr[s2[i]-'a']--;
        }
        for(int i = 0 ; i < 26; i++)
        {
            if(arr[i]!=0){
                return false;
            }
        }
        return true;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> result;
        result.push_back(words[0]);
        for(int i = 1; i < words.size(); i++)
        {
            if(!anagram(result.back(), words[i])){
                result.push_back(words[i]);
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of words: ";
    cin >> n;
    vector<string> words(n);
    cout << "Enter the words: ";
    for(int i = 0; i < n; i++) {
        cin >> words[i];
    }
    vector<string> result = sol.removeAnagrams(words);
    cout << "Result after removing consecutive anagrams:\n";
    for(const string& word : result) {
        cout << word << " ";
    }
    cout << endl;
}
