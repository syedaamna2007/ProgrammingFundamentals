/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i =0; i<=numsSize ; i++){
        for (int n= i+1; n<=numsSize; n++){
            if (nums[i]+ nums[i+n]== target){
            int returnSize = [i , i+n];
            return returnSize;
            }
        }
    }
}