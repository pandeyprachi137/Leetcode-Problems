class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int ind1=0;
        int ind2=height.size()-1;
        while(ind1<ind2){
            area=max(area,(ind2-ind1)*min(height[ind1],height[ind2]));
            if(height[ind1]>height[ind2])ind2--;
            else ind1++;
        }
        return area;
    }
};