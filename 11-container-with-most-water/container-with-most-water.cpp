class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int area = 0 , maxArea = 0 ,h=0,w=0;

        while(l<r){
            h = min(height[l],height[r]);
            w = r-l;
            area = h*w;
            maxArea=max(area,maxArea);
            
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxArea;
    }
};