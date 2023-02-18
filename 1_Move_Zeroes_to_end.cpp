//Link: https://leetcode.com/problems/move-zeroes/description/

//Q: Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

//Approach: Take two pointer one for nonzero & one for zero

void moveZeroes(vector<int>& nums) {
    int nonZero = 0;
        for(int zero=0; zero<nums.size(); zero++){
            if(nums[zero] != 0){
                swap(nums[nonZero], nums[zero]);
                nonZero++;
            }
        }
}