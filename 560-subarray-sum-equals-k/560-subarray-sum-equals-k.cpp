class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int res=0;
        int currSum=0;
        int n=arr.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            currSum+=arr[i];
            if(currSum==k)res++;
            if(mp.find(currSum-k)!=mp.end())res+=mp[currSum-k];
            mp[currSum]++;
        }
        return res;
    }
};
// int n=arr.size();
//         int res=0;
//         int currSum=0;
//         unordered_map<int,int> mp;
//         for(int i=0;i<n;i++){
//             currSum+=arr[i];
//             if(currSum==k)res++;
//             if(mp.find(currSum-k)!=mp.end())res+=mp[currSum-k];
//             mp[currSum]++;
//         }
//         return res;