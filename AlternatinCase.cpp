#include <iostream>

class Solution
{
public:
    std::string AlternatingCase(std::string word)
    {
        std::string result = "";

        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] == toupper(word[i]))
            {
                result += tolower(word[i]);
            }
            else if (word[i] == tolower(word[i]))
            {
                result += toupper(word[i]);
            }
            else
            {
                result += word[i];
            }
        }
        return result;
    }
};

class Solution2
{
public:
    std::string AlternatingCase(std::string word)
    {
        std::string result = "";

        for (int i = 0; i < word.length(); i++)
        {
            if (isupper(word[i]))
            {
                result += tolower(word[i]);
            }
            else if (islower(word[i]))
            {
                result += toupper(word[i]);
            }
            else
            {
                result += word[i];
            }
        }
        return result;
    }
};

int main()
{
    Solution2 S1;
    std::string word = "1 GoAl HeLLo";

    std::cout << S1.AlternatingCase(word) << std::endl; // output heLLO

    std::cin.get();
}