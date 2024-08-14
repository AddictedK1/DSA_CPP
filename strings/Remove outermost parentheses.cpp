//    leetcode-------->   https://leetcode.com/problems/remove-outermost-parentheses/description/

class Solution {
public:
    string removeOuterParentheses(string s) {
        int size=s.size();
        int i=0,j;
        int flg=0;
        for(i=0; i<size; i++)  {
            for(j=i; j<size; j++)  {
                if(s[j]=='(') flg++;
                else flg--;
                if(flg==0)  {
                    s.erase(j,1);
                    s.erase(i,1);
                    i=j-2;
                    break;
                }  
            }
        }
    return s; 
    }
};
