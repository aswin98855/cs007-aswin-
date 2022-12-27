void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void merge(int A[],int l,int mid,int h){
    int i=l,j=mid+1,k=l;
    int B[50000];
    while(i<=mid && j<=h){
        if(A[i]<A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];
    }
    for(;i<=mid;i++)
        B[k++]=A[i];
    for(;j<=h;j++)
        B[k++]=A[j];
    for(i=l;i<=h;i++)
        A[i]=B[i];
}
void mergesort(int A[],int l,int h){
    int mid;
    if(l<h){
        mid=(l+h)/2;
        mergesort(A,l,mid);
        mergesort(A,mid+1,h);
        merge(A,l,mid,h);
    }
}
int maximumBags(int* capacity, int capacitySize, int* rocks, int rocksSize, int additionalRocks){
    int count=0;
    for(int i=0;i<rocksSize;i++){
        rocks[i]=capacity[i]-rocks[i];
    }
    mergesort(rocks,0,rocksSize-1);
    for(int i=0;i<rocksSize;i++){
        if(rocks[i]==0){
            count++;
            continue;
        }
        if(rocks[i]<=additionalRocks){
            additionalRocks-=rocks[i];
            count++;
        }
        else{
            break;
        }
    }
    return count;
}