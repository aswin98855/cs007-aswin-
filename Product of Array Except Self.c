int* productExceptSelf(int* nums, int numsSize, int* returnSize){
    int *a=(int *)malloc(sizeof(int)*numsSize);
    a[0]=1;
    for(int i=1;i<numsSize;i++){
        a[i]=a[i-1]*nums[i-1];
    }
    int rp=nums[numsSize-1];
    for(int i=numsSize-2;i>=0;i--){
        a[i]=a[i]*rp;
        rp=rp*nums[i];
    }
    *returnSize=numsSize;
    return a;
}