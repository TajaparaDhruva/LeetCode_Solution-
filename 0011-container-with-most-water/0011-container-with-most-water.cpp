class Solution {
public:
    int maxArea(vector<int>& height) {
        int right=height.size()-1,left=0,ans=0;

        while(left < right){
            int h = min(height[left],height[right]);
            int width = right - left;
            int area = h * width;

            ans = max(ans,area);

            if(height[left] < height[right]){
                left++;
            }

            else{
                right--;
            }
        }
        return ans;
    }
};