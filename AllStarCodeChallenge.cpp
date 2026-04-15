#include <iostream>

// intput word = "Hello"  and C = l  counter -----> 2
class Solution
{
public:
    int CharacterCount(std::string word, char C)
    {
        int counter = 0;

        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] == C)
            {
                counter++;
            }
        }
        return counter;
    }
};
class Solution2
{
public:
    int CharacterCount(std::string word, char C)
    {

        int i = 0;
        int counter = 0;

        while (i < word.length())
        {
            i++;
            if (word[i] == C)
            {
                counter++;
            }
        }
        return counter;
    }
};

int main()
{
    Solution S1;
    Solution2 S2;

    std::string word = "Yassin";
    char C = 's';

    std::cout << "Counter: " << S1.CharacterCount(word, C) << std::endl;

    std::cout << "Counter: " << S2.CharacterCount(word, C) << std::endl;

    std::cin.get();
}