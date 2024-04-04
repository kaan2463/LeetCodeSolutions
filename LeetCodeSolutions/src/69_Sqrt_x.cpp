// 69_Sqrt_x_
class Solution
{
public:
    double abs(double x)
    {
        return x < 0 ? -x : x;
    }
    int mySqrt(int r)
    {
        double x = 1.0;
        double old = INT_MAX;


        while (abs(old - x) > 0.9)
        {
            old = x;
            x = x - (x * x - r) / (2 * x);
        }
        return x;
    }
};