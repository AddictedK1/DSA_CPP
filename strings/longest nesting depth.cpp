// leetcode------>  https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/


class Solution {
public:
    int maxDepth(string s) {
        int size = s.size();
        int flg=0;
        int maxDepth=0;
        for(int i=0; i<size; i++)  {
            if(s[i]=='(')  {
                flg++;
            }else if(s[i]==')')  {
                flg--;
            }
            if(flg>maxDepth) maxDepth=flg;
        }
        return maxDepth;
    }
};
