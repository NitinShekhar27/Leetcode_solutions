class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1.0;
        if(x == 0) return 0.0;
        if(x == 1) return 1.0;
        if(x == -1 && n%2 == 0) return 1.0;
        if(x == -1 && n%2 != 0) return -1.0;

        long long binform = n;
        long double current_x = x;
        
        if(n < 0) {
            current_x = 1 / current_x;
            binform = -binform;
        }
        
        long double ans = 1.0;

        while(binform > 0) {
            if(binform % 2 == 1) {
                ans *= current_x;
            }
            current_x *= current_x;
            binform /= 2;
        }
        return (double)ans;
    }
};
