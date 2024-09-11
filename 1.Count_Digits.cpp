class Solution{
public:
    int evenlyDivides(int N){
        int count = 0; // To store the count of digits that divide N evenly
        int originalN = N; // Keep the original value of N
        
        // Loop through each digit of the number N
        while (N > 0) {
            int digit = N % 10; // Extract the last digit
            if (digit != 0 && originalN % digit == 0) {
                count++; // Increment count if digit divides originalN evenly
            }
            N /= 10; // Remove the last digit from N
        }
        
        return count; // Return the total count of digits that divide N evenly
    }
};
