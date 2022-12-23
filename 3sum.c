void sort(int* arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int repeated(int **res, int t, int nums0,int nums1,int nums2) {
    int i;
    for(i=0;i<t;i++){
        if(nums0==res[i][0] && nums1==res[i][1] && nums2==res[i][2])
            return 1;
    }
    return 0;
}
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    int **arr=(int **)malloc(sizeof(int *)*numsSize*numsSize);
    sort(nums,numsSize);
    int a=0;
    int count=0;
    for (int i = 0; i < numsSize - 1; i++) {
        int l = i + 1;
        int r = numsSize - 1;
        int x = nums[i];
        while (l < r) {
            if (x + nums[l] + nums[r] == 0) {
                if(repeated(arr,count,x,nums[l],nums[r])){
                    l++;
                    continue;
                }
                arr[count] = (int *)malloc(sizeof(int) * 3);
                arr[count][0]=x;
                arr[count][1]=nums[l];
                arr[count][2]=nums[r];
                count++;
                l++;
                r--;
            }
            else if (x + nums[l] + nums[r] < 0)
                l++;
            else
                r--;
        }
    }
    *returnSize=count;
    *returnColumnSizes = malloc((count) * sizeof(int));    
    for (int i = 0; i < count; i++)
        (*returnColumnSizes)[i] = 3;
    return arr;
}