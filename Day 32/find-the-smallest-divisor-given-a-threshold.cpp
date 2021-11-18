#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=0 , high=nums.size()-1;
       /* int d=1;
        while(1)
        {
            int sum=findsum(nums,d);
            cout<<sum<<endl;                        right solution but O(n^2) giving tle so using binary search
            if(sum<=threshold) return d;
            ++d;
        } */

        
    }
private:
    int findsum(vector<int>& nums, int d){
        int sum=0;
        for(int num:nums)
        {
            sum+= (num+d-1)/d;
        }
        return sum;
    }
};

int main()
{
    Solution ob1;
    vector<int> v{1,2,5,9};
    cout<<ob1.smallestDivisor(v , 6);
}