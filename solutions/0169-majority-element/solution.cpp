class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int major =0;

        for (int n =0 ; n< nums.size() ; n++){
            if(count == 0){
                major = nums[n];
            }
            if(nums[n] == major){
                count++;
            }
            else{
                count--;
            }
        }
        return major;

    }
};
