#include <iostream>
/*we need to know if all the string has a Upper case letter and return true or false*/
class Solution
{
public:
    bool Is_Uppercase(const std::string &s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (islower(s[i]))
            {
                return false;
            }
        }
        return true;
    }
};
class Solution2
{
public:
    bool Is_Uppercase(const std::string &s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (toupper(s[i]))
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{

    Solution S1;

    if (S1.Is_Uppercase("YASSIN")) // false
    {
        std::cout << "true\n";
    }
    else
    {
        std::cout << "false\n";
    }
    std::cin.get();
}