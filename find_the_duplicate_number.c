int findDuplicate(int* nums, int numsSize){
    int slow=0;
    int fast=0;
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while(slow!=fast);
    fast = 0;
    do {
        slow = nums[slow];
        fast = nums[fast];
    } while(slow!=fast);
    return slow;
}