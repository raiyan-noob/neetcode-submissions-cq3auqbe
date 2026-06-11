class KthLargest {
public:
vector<int>v;
int x;
    KthLargest(int k, vector<int>& nums) {
      v=nums;
      x=k;  
    }
    
    int add(int val) {
        v.push_back(val);
        sort(v.begin(),v.end());
        return v[v.size()-x];
    }
};
