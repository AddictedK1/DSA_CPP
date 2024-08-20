// leetcode ------>  https://leetcode.com/problems/rotate-string/

class Solution {
public:
    bool rotateString(string s, string goal) {
        int sSize = s.size();
        int goalSize = goal.size();
        string test;
        int i=0;
        int j=0;
        for(int len=0; len<sSize; len++)  {
            
            for(i=sSize-len-1; i<sSize; i++)  {
                test+=s[i];
            }
            for(j=0; j<sSize-len-1; j++)  {
                test+=s[j];
            }
            // cout<<test<<endl;
            if(test == goal) return true;
            else test.erase(0,test.size());
            
        }
        return false;
    }
};
