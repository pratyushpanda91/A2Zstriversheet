class Solution {
  public:
  
    int findgcd(long long A, long long B){
        while (B != 0) {
            long long temp = B;
            B = A % B;
            A = temp;
        }
        return A;
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long GCD = findgcd(A, B);
        long long LCM = (A * B)/GCD;
        return {LCM, GCD};
    }
};
