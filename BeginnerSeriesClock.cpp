#include <iostream>

class Solution
{
public:
    int NumberOfMilliSeconds(int h, int m, int s)
    {
        return 1000 * ((h * 60 * 60) + (m * 60) + s);
    }
};
class Solution2
{
public:
    int NumberOfMilliSeconds(int h, int m, int s)
    {
        int one_second = s * 1000;
        int One_Minute = m * 60 * 1000;
        int one_Houre = h * 60 * 60 * 1000;

        return one_second + One_Minute + one_Houre;
    }
};
class Solution3
{
public:
    int NumberOfMilliSeconds(int h, int m, int s)
    {
        int one_second = 1000;
        int One_Minute = 60 * one_second;
        int one_Houre = 60 * One_Minute;

        return (s * one_second) + (m * One_Minute) + (h * one_Houre);
    }
};
int main()
{
    Solution3 S1;
    Solution2 S2;
    Solution3 S3;
    int h = 0;
    int m = 1;
    int s = 1;

    std::cout << "Milli Seconds: " << S1.NumberOfMilliSeconds(h, m, s) << std::endl;
    std::cout << "Milli Seconds: " << S2.NumberOfMilliSeconds(h, m, s) << std::endl;
    std::cout << "Milli Seconds: " << S3.NumberOfMilliSeconds(h, m, s) << std::endl;

    std::cin.get();
}
