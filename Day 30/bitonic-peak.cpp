#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int low=0 , high=arr.size()-1 , mid;
        if(arr.size()==1)
            return 0;
        if(arr.size()==2)
        {
            if(arr[0]>arr[1])
                return 0;
            else
                return 1;
        }
        while(low<=high)
        {
            mid=(low+high)/2;
            if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==arr.size()-1 || arr[mid]>=arr[mid+1]))
            {
                return mid;
            }
            else if (mid>0 && arr[mid]<=arr[mid-1])
            {
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return 0;
    }
};

int main()
{
    vector<int> nums{1,2,1,3,5,6,4};
    Solution obj;
    cout<<obj.findPeakElement(nums); 
}