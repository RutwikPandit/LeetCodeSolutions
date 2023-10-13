impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        use std::collections::HashMap;

        let mut index_hash: HashMap<i32,i32> = HashMap::new();

        for (index, value_p) in nums.iter().enumerate(){
            //Check if current value exists in the HM
            match index_hash.get(value_p){
                Some(&target_index) => return vec![target_index,index as i32],
                //Store target value for current index and current index
                None => index_hash.insert(target-*value_p, index as i32),
            };
        }
        //If not found return error vector
        vec![-1,-1]
    }
}
