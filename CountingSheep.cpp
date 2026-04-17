#include <iostream>
#include <vector>

class Solution
{
public:
    int CountingSheeps(std::vector<bool> V1)
    {
        int counter = 0;
        for (int i = 0; i < V1.size(); i++)
        {
            if (V1[i] == true)
            {
                counter++;
            }
        }
        return counter;
    }
};
class Solution2
{
public:
    int CountingSheeps(std::vector<bool> V1)
    {
        int result = 0;
        for (int i = 0; i < V1.size(); i++)
        {
            if (V1[i])
            {
                result++;
            }
        }
        return result;
    }
};
int main()
{

    std::vector<bool> V1 =
        {
            true,
            true,
            true,
            false,
            false,
            false,
            true,
            true,
            true,
            true,
            true,
            true,
            true,
            false,
            false,
            false,
            true,
            true,
            true,
            true,
            true,
            true,
            true,
            false,
            false,
            false,
            true,
            true,
            true,
            true,
        };

    Solution2 S1;

    std::cout << "Number of sheeps :" << S1.CountingSheeps(V1) << std::endl;

    std::cin.get();
}