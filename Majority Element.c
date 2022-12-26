int majorityElement(int* nums, int numsSize){
    int c=1,ind=0;
    for(int i=0;i<numsSize;i++){
        if(nums[ind]==nums[i]){
            c++;
        }
        else{
            c--;
        }
        if(c==0){
            c=1;
            ind=i;
        }
    }
    return nums[ind];
}