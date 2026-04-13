#include <iostream>

class Solution
{
public:
    std::string SliceString(std::string S)
    {
        std::string Removed = "";

        for (int i = 1; i < S.length() - 1; i++)
        {
            Removed += S[i];
            // if (S[i] != S[0] && S[i] != S[S.length() - 1])
            // {
            //     Removed += S[i];
            // }
        }
        return Removed;
    }
};
class Solution2
{
public:
    std::string SliceString(std::string S)
    {

        return S.substr(1, S.length() - 2);
    }
};
int main()
{
    std::string S = "World";

    Solution S1;
    Solution2 S2;

    std::cout << S1.SliceString(S) << std::endl; // world -----> orl
    std::cout << S2.SliceString(S) << std::endl;

    std::cin.get();
}
