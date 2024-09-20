class Solution {
  public:
    string armstrongNumber(int n) {
                int original = n;
        int sum = 0;
        int digits = 0;
        
        // Calculate the number of digits
        int temp = n;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        
        // Calculate the sum of digits raised to the power of 'digits'
        temp = n;
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }
        
        // Check if the sum is equal to the original number
        if (sum == original) {
            return "true";
        } else {
            return "false";
        }
    }
};
