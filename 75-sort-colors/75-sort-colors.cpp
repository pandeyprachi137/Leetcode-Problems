class Solution {
public:
    void sortColors(vector<int>& nums) {
        int nums0=0;
        int nums1=0;
        int nums2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)nums0++;
            else if(nums[i]==1)nums1++;
            else nums2++;
        }
        int i=0;
        while(nums0){
            nums[i]=0;
            nums0--;
            i++;
        }
        while(nums1){
            nums[i]=1;
            nums1--;
            i++;
        }
        while(nums2){
            nums[i]=2;
            nums2--;
            i++;
        }
    }
};