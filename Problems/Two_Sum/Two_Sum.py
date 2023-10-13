class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_index_hashmap={}
        
        for cur_index,cur_num in enumerate(nums):
            if cur_num in num_index_hashmap:
                return [num_index_hashmap[cur_num],cur_index]
            else:
                num_index_hashmap[target-cur_num]=cur_index
            
            
