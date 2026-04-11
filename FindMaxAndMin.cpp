#include <iostream>
#include <vector>

class Solution
{

public:
    int Min(std::vector<int> List)
    {

        int MinValue = List[0];
        int i = 1;

        while (i < List.size())
        {

            if (List[i] < MinValue)
            {
                MinValue = List[i];
            }

            i++;
        }
        return MinValue;
    }

    int Max(std::vector<int> List)
    {
        int MaxValue = List[0];

        int i = 1;

        while (i < List.size())
        {
            if (List[i] > MaxValue)
            {
                MaxValue = List[i];
            }

            i++;
        }

        return MaxValue;
    }
};
// Another Solution

class Solution2
{
public:
    int Min(std::vector<int> List)
    {

        int MinValue = List[0];

        for (int i = 0; i < List.size(); i++)
        {
            if (List[i] < MinValue)
            {
                MinValue = List[i];
            }
        }

        return MinValue;
    }

    int Max(std::vector<int> List)
    {
        int MaxValue = List[0];

        for (int i = 0; i < List.size(); i++)
        {
            if (List[i] > MaxValue)
            {
                MaxValue = List[i];
            }
        }

        return MaxValue;
    }
};

int main()
{
    Solution S1;
    std::vector<int> List = {200, 500, 115, -100, 40, 1, 700};

    std::cout << "Min : " << S1.Min(List) << std::endl;
    std::cout << "Max : " << S1.Max(List) << std::endl;

    std::cin.get();
}