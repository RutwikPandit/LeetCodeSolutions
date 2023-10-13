class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Create a hashmap to map current required target and previous element index
        unordered_map<int,int> index_lookup;
        for (auto i=0; i < nums.size(); i++){
            
            if( index_lookup.find(nums[i]) != index_lookup.end()){
                //If number needed for pair is in index lookup, there exists atleast one pair.
                return {index_lookup[nums[i]],i};
            }
            else{
                //Else store the number needed for the pair and index
                index_lookup[target-nums[i]]=i;
            }
            
        }
        return {-1,-1};
    }
};
