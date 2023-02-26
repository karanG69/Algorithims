1st Approach

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        hash_m={}
        ans=[]
        for i in range(len(nums)):
            hash_m[nums[i]]=i
        for i in range(len(nums)-2):
            for j in range(len(nums)-1):
                if j>i:
                    tsum=0-(nums[i]+nums[j])
                    if tsum in hash_m and hash_m[tsum]>j:
                        listt=[]
                        listt.append(nums[i])
                        listt.append(nums[j])
                        listt.append(tsum)       
                        listt.sort()
                        if listt not in ans:
                            ans.append(listt)
        return ans
 
 2nd Approach.
 
 class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> ans =new ArrayList<>();

        for(int i=0;i<nums.length-2;i++){
            if(i==0 || nums[i]!=nums[i-1]){
                int lo=i+1, hi=nums.length-1, sum=0-(nums[i]);
                while(lo<hi){
                    if (nums[lo]+nums[hi]==sum){
                        ans.add(Arrays.asList(nums[i],nums[lo],nums[hi]));

                        while(lo<hi && nums[lo]==nums[lo+1]) lo++;
                        while(lo<hi && nums[hi]==nums[hi-1]) hi--;

                        lo++;
                        hi--;
                    }
                    else if(nums[lo]+nums[hi]<sum) lo++;
                    
                    else hi--;
                }
            }
        }
        return ans;
    }
}
