#include <iostream>

class Solution
{
public:
    int String_To_Number(const std::string &S)
    {
        return stoi(S); // (stoi) is a function which means (string to integer)
    }
};

int main()
{
    Solution s;
    std::string S = "1234";
    std::cout << "Number is : " << s.String_To_Number(S) << std::endl;

    // the evidence that the output is a number not a string
    std::cout << s.String_To_Number(S) + 1 << std::endl;

    std::cin.get();
}