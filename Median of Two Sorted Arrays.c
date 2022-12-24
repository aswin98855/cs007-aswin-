double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int p=0,q=0,r=0;
    double b;
    int a[nums1Size+nums2Size];
    while(p!=nums1Size && q!=nums2Size){
        if(nums1[p]<nums2[q]){
            a[r++]=nums1[p];
            p++;
        }
        else{
            a[r++]=nums2[q];
            q++;
        }
    }
    while(p!=nums1Size){
        a[r++]=nums1[p];
        p++;
    }
    while(q!=nums2Size){
        a[r++]=nums2[q];
        q++;
    }
    if((nums1Size+nums2Size)%2 ==1){
        b=a[(nums1Size+nums2Size)/2];
    }
    else{
        b=(a[(nums1Size+nums2Size)/2]+a[((nums1Size+nums2Size)/2)-1])/2.0;
    }
    return b;
}