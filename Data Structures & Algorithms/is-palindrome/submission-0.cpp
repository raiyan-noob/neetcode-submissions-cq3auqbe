class Solution {
public:
    bool isPalindrome(string s) {
        string f;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            f.push_back(s[i]);
            else if(isalpha(s[i]))
            {char x=tolower(s[i]);
            f.push_back(x);
            }
        }
        string g=f;
        reverse(g.begin(),g.end());
        if(g==f)
        return true;
        else
        return false;
    }
};
