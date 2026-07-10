class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int i=0,j=0;
        while(stones.size()>1)
        {
            sort(stones.begin(),stones.end());
            i=stones[stones.size()-1];
            if(stones.size()>1)
            j=stones[stones.size()-2];
            if(i==j)
            {
                stones.pop_back();
                stones.pop_back();
            }
            else{
                stones.pop_back();
                stones.pop_back();
                stones.push_back(i-j);
            }
        }
        if(stones.size()==0)
        return 0;
        else
        return stones[0];
    }
};
