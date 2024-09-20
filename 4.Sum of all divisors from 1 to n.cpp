class Solution
{
public:
    long long sumOfDivisors(int N)
    {
       long long result = 0;
        
        // Traverse through each number i from 1 to N
        for (int i = 1; i <= N; ++i) {
            // Add i * (N / i) to the result, because i is a divisor of (N / i) numbers
            result += i * (N / i);
        }
        
        return result;
    }
};
