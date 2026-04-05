class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
        int cnt=0;
        int ans=0;
        int j=0;
        bool flag=false;
        for(int i=0;i<s.size();i++)
        {
            if(mp.count(s[i])==0)
            {
                if(!flag)
                {
                    j=i+1;
                    flag=true;
                }
                cnt++;
                mp[s[i]]++;
            }
            else
            {
                ans=max(ans,cnt);
                cnt=0;
                mp.clear();
                i=j-1;
                flag=false;
            }
        }
        ans=max(ans,cnt);
        return ans;
    }
};
