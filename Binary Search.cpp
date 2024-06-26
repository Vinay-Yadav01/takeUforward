class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        int mid=(s+e)/2;
        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }
            if(target>nums[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=(s+e)/2;
        }
        return -1;
    }
};
