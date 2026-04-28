class Solution {
public:
    int lengthOfLastWord(string s) {
        int mx=0, cnt=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' ') 
            {
                if(cnt!=0) mx= cnt;
                cnt=0;
            }
            else cnt++;
        }
        if(cnt!=0) mx=cnt;
        return mx;
    }
};