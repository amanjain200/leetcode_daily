/*
class Solution {
public:

    double findAns(double x, long long n){
        if(n == 0) return 1;
        if(n%2 == 0) return findAns(x*x, n/2);
        return x * findAns(x, n-1);
    }

    double myPow(double x, int n) {
        if(n == 0 || x == 1) return (double)1;
        if(n > 0) return findAns(x, n);
        long long t = n;
        t = -t;
        return 1/findAns(x, t);
    }
};
*/
/*
class Solution {
public:

    double findAns(double x, long long n){
        if(n == 0) return 1;
        if(n%2 == 0) return findAns(x*x, n/2);
        return x * findAns(x, n-1);
    }

    double myPow(double x, int n) {
        if(n == 0 || x == 1) return (double)1;
        if(n > 0) return findAns(x, n);
        long long t = n;
        t = -t;
        return 1/findAns(x, t);
    }
};

*/