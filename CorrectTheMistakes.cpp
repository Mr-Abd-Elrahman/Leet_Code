#include <iostream>

class Solution
{

public:
    std::string Correct(std::string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                s[i] = 'I';
            }
            else if (s[i] == '5')
            {
                s[i] = 'S';
            }
            else if (s[i] == '0')
            {
                s[i] = 'O';
            }
        }
        return s;
    }
};
class Solution2
{

public:
    std::string Correct(std::string s)
    {
        for (int i = 0; i < s.length(); i++)
        {

            s[i] == '1' ? s[i] = 'I' : s[i] == '0' ? s[i] = 'O'
                                   : s[i] == '5'   ? s[i] = 'S'
                                                   : s[i];
        }
        return s;
    }
};
class Solution3
{

public:
    std::string Correct(std::string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            switch (s[i])
            {
            case '1':
                s[i] = 'I';
                break;
            case '5':
                s[i] = 'S';
                break;
            case '0':
                s[i] = 'O';
                break;
            }
        }
        return s;
    }
};
int main()
{
    Solution3 S1;

    std::string s = "1f you 1n the k1ngdoom";
    std::string s2 = "0n Fr1day we w1ll g0 t0 the 5upermarket";

    std::cout << S1.Correct(s2) << std::endl;
    std::cin.get();
}