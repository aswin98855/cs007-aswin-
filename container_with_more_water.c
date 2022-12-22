int min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int maxArea(int* height, int heightSize){
    int i = 0;
    int j = heightSize-1;
    int max_area = 0;
    while(i != j){
        int area = min(height[i], height[j])*(j-i);
        if(area>max_area){
            max_area = area;
        }
        if(min(height[i], height[j])==height[i]){
            i++;
        }
        else{
            j--;
        }
    }
    return max_area;
}