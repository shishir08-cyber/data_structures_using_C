
int* plusOne(int* digits, int digitsSize, int* returnSize) 
{
    // Allocate memory for the result array
    int* result = (int*)malloc((digitsSize + 1) * sizeof(int));
    int carry = 1;  // Start with the carry as 1 (adding 1 to the number)

    // Traverse the digits array from the end
    for (int i = digitsSize - 1; i >= 0; i--) 
    {
        int sum = digits[i] + carry;  // Add carry to the current digit
        result[i + 1] = sum % 10;     // Update the result
        carry = sum / 10;             // Update the carry
    }

    // If there's still a carry after the loop, handle the overflow
    if (carry > 0) 
    {
        result[0] = 1;               // Set the first digit to 1
        *returnSize = digitsSize + 1; // New size includes the extra digit
        return result;               // Return the result
    } 
    else 
    {
        // No carry, copy the result to avoid an extra leading zero
        for (int i = 0; i < digitsSize; i++) 
        {
            result[i] = result[i + 1];
        }
        *returnSize = digitsSize;     // Result size remains the same
        return result;                // Return the adjusted array
    }
}
