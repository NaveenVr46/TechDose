int find_Kth_Largest(int* nums, int numsSize, int k){
for(int i=0;i<numsSize-1;i++){
    for(int j=i+1;j<numsSize;j++){
        if(nums[i]>nums[j]){
        int t=nums[i];
        nums[i]=nums[j];
        nums[j]=t;
        }
    }
}
    return nums[numsSize-k];
}