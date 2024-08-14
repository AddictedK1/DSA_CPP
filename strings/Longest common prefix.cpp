// leetcode----->  https://leetcode.com/problems/longest-common-prefix/


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size = strs.size();
        string prefix;
        for(int i=0; i<strs[0].size(); ++i)  {
            for(int j=1; j<size; ++j)  {
                if(strs[j].size()==i || strs[0].at(i)!=strs[j].at(i))  {
                    return prefix; 
                }
            }
            prefix=strs[0].substr(0,i+1);
        }
    return prefix;
    }
};
