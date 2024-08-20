// leetcode  -------->  https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        int sSize = s.size();
        int tSize = t.size();
        int freq[26]={0};
        if(sSize != tSize)  return false;

        for(int i=0; i<sSize; i++)  {
            freq[s[i]-'a']++;
        }
        for(int i=0; i<tSize; i++)  {
            freq[t[i]-'a']--;
        }
        for(int i=0; i<26; i++)  {
            if(freq[i]!=0)  return false;
        }
    return true;
    }
};
