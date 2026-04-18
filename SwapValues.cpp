#include <iostream>
// #include <utility> need to know about it

class Solution
{
public:
    std::pair<int, int> SwapValues(std::pair<int, int> &Values)
    {
        int temporary = 0;

        temporary = Values.first;
        Values.first = Values.second;
        Values.second = temporary;

        return Values;
    }
};

class Solution2
{
public:
    std::pair<int, int> SwapValues(std::pair<int, int> &Values)
    {
        std::swap(Values.first, Values.second);

        return Values;
    }
};

int main()
{
    Solution2 S1;

    int num1 = 5;
    int num2 = 4;
    std::pair<int, int> Values = {num1, num2};

    std::cout << Values.first << std::endl;
    std::cout << Values.second << std::endl;

    std::cout << "\nAfter Swaping \n\n";

    S1.SwapValues(Values);
    std::cout << Values.first << std::endl;
    std::cout << Values.second << std::endl;

    std::cin.get();
    return 0;
}
