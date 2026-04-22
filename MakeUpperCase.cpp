#include <iostream>

class Solution
{
public:
    std::string UpperCase(const std::string &input_str)
    {
        std::string result = "";

        for (int i = 0; i < input_str.length(); i++)
        {
            result += toupper(input_str[i]);
        }
        return result;
    }
};

int main()
{

    Solution S1;

    std::string s = "zkaria arafat seaaed taha";

    std::cout << S1.UpperCase(s) << std::endl;

    std::cin.get();
}