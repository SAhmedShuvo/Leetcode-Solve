class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string tmp="";
        vector<string> v;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!= ' ')tmp+=s[i];
            else {
                v.push_back(tmp);
                tmp="";
            }
        }
        v.push_back(tmp);
        bool ans= true;
        if(v.size()!=pattern.size()) return false;
        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;
        for(int i=0; i<pattern.size(); i++)
        {
            if(mp1.find(pattern[i])==mp1.end() && mp2.find(v[i])==mp2.end())
            {
                mp1[pattern[i]]= v[i];
                mp2[v[i]]= pattern[i];
            }
            else if(mp1.find(pattern[i])!=mp1.end())
            {
                if(mp1[pattern[i]]!=v[i]) ans=false;
            }
            else if(mp2.find(v[i])!=mp2.end())
            {
                if(mp2[v[i]]!=pattern[i]) ans=false;
            }
        }
        return ans;
    }
};