#include <iostream>

// Remove Exclamation mark (!)

class Solution
{
public:
    std::string RemoveExclamationMark(std::string S)
    {
        std::string Clean = "";
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] != '!')
            {
                Clean += S[i];
            }
        }

        return Clean;
    }
};
class Solution2
{
public:
    std::string RemoveExclamationMark(std::string S)
    {
        std::string Clean = "";
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] == '!')
            {
                continue;
            }
            Clean += S[i];
        }

        return Clean;
    }
};

class Solution3
{
public:
    std::string RemoveExclamationMark(std::string S)
    {
        std::string Clean = "";
        for (char c : S)
        {
            if (c != '!')
            {
                Clean.push_back(c);
            }
        }

        return Clean;
    }
};

int main()
{

    Solution3 S1;

    std::string S = "!Ab!d!!o";

    std::cout << S1.RemoveExclamationMark(S) << std::endl;

    std::cin.get();
}