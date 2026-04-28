class Solution {
public:
    int removeDuplicates(vector<int>& a) {
       int val=a[0], sz= a.size();
       int indx=1 , cnt=1;
       for(int i=1; i<sz; i++) 
       {
            if(a[i]==val)
            continue;
            else
            {
                val=a[i];
                a[indx]=val;
                cnt++;
                indx++;
            }
       }
       return cnt;
    }
};