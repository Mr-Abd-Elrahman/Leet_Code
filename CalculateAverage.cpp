#include <iostream>
#include <vector>

class Solution
{
public:
    double CalculateAverage(const std::vector<int> &Values)
    {
        double sum = 0;

        for (int i = 0; i < Values.size(); i++)
        {
            sum += Values[i];
        }
        return sum / Values.size();
    }
};
int main()
{
    Solution S1;

    std::vector<int> Values = {10, 20, 30, 40};

    std::cout << "Average: " << S1.CalculateAverage(Values) << std::endl; // output 25

    std::cin.get();
    return 0;
}