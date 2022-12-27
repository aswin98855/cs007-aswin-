bool canJump(int* nums, int numsSize){
    int c=0;
    for(int i=0;i<numsSize;i++){
        if(c<i){
            return false;
        }
        if(c<i+nums[i]){
            c=i+nums[i];
        }
    }
    return true;
}