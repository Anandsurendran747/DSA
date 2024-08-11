class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        long i=0,avg=0,j=0,sum=0,c=2*k;
        vector<int> result(nums.size(),-1);
        if(k==0){
            return nums;
        }   
        while(i<nums.size()){
            sum+=nums[i];
            if(i>=c){
                avg = sum/(c+1);
                result[i-k]=avg;
                sum-=nums[j];
                j++;
            }

            i++;
        }
        return result;
    }
};