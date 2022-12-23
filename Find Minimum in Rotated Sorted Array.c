int findMin(int* nums, int numsSize){
    if(numsSize==1){
        return nums[0];
    }
    int a=nums[0];
    int i=1,j=numsSize-1;
    while(i!=j){
        int m=(i+j)/2;
        if(nums[m]>a){
            i=m+1;
        }
        else{
            j=m;
        }
    }
    if(a<nums[i]){
        return a;
    }
    return nums[i];
}