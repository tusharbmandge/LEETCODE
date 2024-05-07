class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ans=[]
        dict1={}
        for i in range (len(nums)):
            if target-nums[i] in dict1:
                ans.append(i)
                ans.append(dict1[target-nums[i]])
            dict1[nums[i]]=i
        return ans


     