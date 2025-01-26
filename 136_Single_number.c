int singleNumber(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        int foundDuplicate = 0;
        for (int j = 0; j < numsSize; j++) {
            if (i != j && nums[i] == nums[j]) {
                foundDuplicate = 1;
                break;
            }
        }
        if (!foundDuplicate) {
            return nums[i];
        }
    }
    return -1;
}
