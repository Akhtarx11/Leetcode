class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int start=0;
        int end=n-1;
        for(int i=0;i<n;i++){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};