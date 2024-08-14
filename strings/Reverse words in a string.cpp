// leetcode------>   https://leetcode.com/problems/reverse-words-in-a-string/description/

class Solution {
public:
    string reverseWords(string s) {
        int i=s.size()-1;
        string rev;
        int flg=0;
        while(i>=0)  {
            while(i>=0 && s[i]==' ') i--;

            if(i<0) break;

            int flg = i;
            while(i>=0 && s[i]!=' ') i--;
                rev += s.substr(i+1, flg-i); 
                if(!s.empty()) rev+=' ';  
                 
        }
        rev.erase(rev.size()-1,1);
    return rev;
    }
};
