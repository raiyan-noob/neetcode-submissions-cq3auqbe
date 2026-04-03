class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int ind=numbers.size();
       
        vector<int>v;
        for(int i=0;i<ind;i++)
        {
            for(int j=i+1;j<ind;j++)
            {
                if(numbers[i]+numbers[j]==target)
                {
                    v.push_back(i+1);
                    v.push_back(j+1);
                }
                if(v.size()==2)
                break;
            }
            if(v.size()==2)
            break;
        }
        return v;
    }
};
