class Solution {
public:
    /*
     * @param n: an integer
     * @return: an ineger f(n)
     */
    int fibonacci(int n) {
        // write your code here
        if (n == 1 || n == 2)
            return n-1;
        int i, sumn = 1, sump = 0, suma = 0;
        for (i = 3; i <= n; i++) {
                suma = sumn + sump;
                sump = sumn;
                sumn = suma;
        }
        return suma;
    }
};
