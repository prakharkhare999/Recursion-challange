//Day(11)  House Robber -----
// You are a professional robber planning to rob houses along a street. Each house has
// a certain amount of money stashed, the only constraint stopping you from robbing each
// of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
//   Given an integer array nums representing the amount of money of each house, return the maximum 
//   amount of money you can rob tonight without alerting the police.

 class Solution {
public:


int bob(vector<int>& nums,int i)
{
            if(i>=nums.size()){
            return 0;
        }
        int rob1=nums[i]+bob(nums,i+2);
        int rob2=0+bob(nums,i+1);

        return max(rob1,rob2);

}

    int rob(vector<int>& nums) {
return bob(nums,0);
    }
};
