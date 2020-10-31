/*
 * https://leetcode-cn.com/problems/search-in-rotated-sorted-array/
 */
class Solution {
    public int search(int[] nums, int target) {
        int len = nums.length;
        int left = 0;
        int right = len-1;
        int index = -1;

        while(left<= right) {
            int mid = (right - left) / 2 + left;
            if (target == nums[mid]){
                index = mid;
                break;
            }
            // 如果中间节点小于右边节点，则右半部分数组是有序的
            else if (nums[mid] < nums[right]){
                if (target > nums[mid] && target <= nums[right]){
                    left = mid+1;
                } else {
                    right = mid-1;
                }
            } 
            // 如果中间节点大于右边节点，则左半部分数组是有序的
            else {
                if (target < nums[mid] && target >= nums[left]){
                    right = mid-1; 
                } else {
                    left = mid +1;
                }
            }
        }

        return index;
    }
}
