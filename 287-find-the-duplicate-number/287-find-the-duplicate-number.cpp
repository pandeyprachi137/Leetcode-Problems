class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int i=0;
        while(i<nums.size()){
            int correct_index=nums[i]-1;
            if(nums[i]!=nums[correct_index]){
                swap(nums[i],nums[correct_index]);
            }else i++;
        }
        for(i=0;i<nums.size();i++){
            if(nums[i]!=i+1)break;
        }
        return nums[i];
    }
};