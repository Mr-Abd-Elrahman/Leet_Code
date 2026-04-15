#include <iostream>

class Solution
{
public:
    int basicOP(char op, int val1, int val2)
    {
        switch (op)
        {
        case '+':
            return val1 + val2;
            break;

        case '-':
            return val1 - val2;
            break;

        case '*':
            return val1 * val2;
            break;

        case '/':
            return val2 != 0 ? val1 / val2 : 0;

            break;

        default:
            return 0;
            break;
        }
    }
};

int main()
{
    Solution S1;

    std::cout << "result: " << S1.basicOP('-', 6, 2) << std::endl;

    std::cin.get();
}