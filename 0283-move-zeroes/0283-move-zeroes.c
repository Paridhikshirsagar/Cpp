void moveZeroes(int* nums, int numsSize) {
    int i;
    int j=0;


    for(i=0 ; i<numsSize ; i++)
    {
        if(nums[i] != 0) 
        {
            nums[j] =nums[i];
            j++;
        }
    }
    while (j<numsSize)
    {
        nums[j]=0;
        j++;
    }
}