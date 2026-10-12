class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n= digits.size();
        bool flag=true;
        for(int i=n-1;i>0;i--)
        {
            if(flag){
            if(digits[i]==9)
            {
                digits[i]=0;
            }
            else
            {
                digits[i]++;
                flag=false;
            }
            }
        }
        if(flag && digits[0]==9)
        {
            vector<int>ans;
            ans.push_back(1);
            ans.push_back(0);
            for(int i=1;i<digits.size();i++)
            ans.push_back(digits[i]);
            return ans;
        }
        else if(flag && digits[0]!=9)
        digits[0]++;
        return digits;

    }
};
