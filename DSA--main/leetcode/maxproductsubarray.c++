class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxproduct = INT_MIN, currproduct=1;
        for(int val : nums){
            currproduct *= val;
            maxproduct = max(maxproduct,currproduct);
            if(currproduct==0){
                currproduct = 1;
            }
            
        }
        currproduct = 1;
        for(int i = nums.size()-1;i>=0;i--){
            currproduct *=nums[i];
            maxproduct = max(maxproduct,currproduct);
            if(currproduct==0){
                currproduct=1;
            } 
        }
        return maxproduct;

    }
};