class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        vector<int> prefixSum(a.size()+1,0);
        for(int i=1;i<=a.size();i++){
            prefixSum[i]=prefixSum[i-1]+a[i-1];
        }
        int i=0,totalPnts=prefixSum[a.size()];
        int j=i+a.size()-k;
        int maxScore=INT_MIN;
        prefixSum[0]=0;
        while(j<prefixSum.size()){
            maxScore=max(maxScore,totalPnts-(prefixSum[j]-prefixSum[i]));
            i++;
            j++;
        }
       return maxScore;
    }
};
 // vector<int> prefixSum(a.size()+1,0);
 //        for(int i=1;i<=a.size();i++){
 //            prefixSum[i]=prefixSum[i-1]+a[i-1];
 //        }
 //        int i=0, totalPoints=prefixSum[a.size()];
 //        int j=i+a.size()-k, maxScore=INT_MIN;
 //        prefixSum[0]=0;
 //        while(j<prefixSum.size()){
 //            maxScore=max(maxScore, totalPoints-(prefixSum[j]-prefixSum[i]));
 //            i++;
 //            j++;
 //        }
 //        return maxScore;
