class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            int ind=nums[i]-1;
            if(nums[i]!=nums[ind]){
                swap(nums[i],nums[ind]);
            }else{
                i++;
            }
        }
        
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1)res.push_back(nums[i]);
        }
        return res;
    }
};