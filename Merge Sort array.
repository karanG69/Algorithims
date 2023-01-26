class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        if m==0 and n==0:
            return 
        elif m==0 and n!=0:
            nums1.clear()
            for i in nums2:
                nums1.append(i)
        elif m!=0 and n==0:
            return
        else:
            i=0
            j=0
            nums=[]
            while i<m and j<n:
                if(nums1[i]<nums2[j]):
                    nums.append(nums1[i])
                    i+=1
                else:
                    nums.append(nums2[j])
                    j+=1
            while i<m:
                nums.append(nums1[i])
                i+=1
            while j<n:
                nums.append(nums2[j])
                j+=1
            nums1.clear()
            for i in nums:
                nums1.append(i)
            
        """
        Do not return anything, modify nums1 in-place instead.
        """
