// leetcode -------->  https://leetcode.com/problems/roman-to-integer/
//  Basic Decision Making will do the work 

class Solution {
public:
    int romanToInt(string s) {
        int size = s.size();
        int num=0;
        for(int i=0; i<size; i++)  {
            if(s[i]=='I')  {
                if(s[i+1]=='V' || s[i+1]=='X')  {
                    num-=1;
                }else{
                    num+=1;
                }
            }else if(s[i]=='V')  {
                num+=5;
            }else if(s[i]=='X')  {
                if(s[i+1]=='L' || s[i+1]=='C')  {
                    num-=10;
                }else{
                    num+=10;
                }
            }else if(s[i]=='L')  {
                num+=50;
            }else if(s[i]=='C')  {
                if(s[i+1]=='D' || s[i+1]=='M')  {
                    num-=100;
                }else{
                    num+=100;
                }
            }else if(s[i]=='D')  {
                num+=500;
            }else if(s[i]=='M')  {
                num+=1000;
            }
        }
    return num;
    }
};
