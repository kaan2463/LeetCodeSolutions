// 50_Pow_x_n_
class Solution
{
public:
    double myPow(double x, int n)
    {

        if (x == 0)
        {
            return 0;
        }

        if (n == 0)
        {
            return 1.0;
        }

        if (x == 1)
        {
            return 1.0;
        }

        if (n < 0)
        {
            return 1.0 / (myPow(x, -(1 + n)) * x);
        }



        if (n % 2 == 1)
        {
            return x * myPow(x, n - 1);
        }

        double res = myPow(x, n / 2);

        return res * res;
    }
};