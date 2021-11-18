class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        return f(nums , nums.size());
    }
    
    vector <vector<int>> f(vector<int> nums , int n)
    {
        //base case
        if(n==0)
        {
            vector<vector<int>>s;
            vector<int> nullset;
            s.push_back(nullset);
            return s;
        }
        //hypothesis / recursive call
     vector<vector<int>> s1=f(nums,n-1);
         //extension to f(n)
     vector<vector<int>> s2=s1;
        
    for(int i=0;i<s2.size();++i)
    {
        s2[i].push_back(nums[n-1]);     //append nth ele
    }
         s1.insert(s1.end(),s2.begin(),s2.end());
         return s1;
    }
};