#include <iostream>

// you are given a string "world"
// output "dlrow"

// note : size and lenght  do the same thing but size is general for a lot of things (vectors ,strings , array)
// length is specific for strings
class Solution
{
public:
    std::string ReverseString(std::string w)
    {
        std::string Reversed = "";

        for (int i = w.size() - 1; i >= 0; i--)
        {
            Reversed += w[i];
        }
        return Reversed;
    }
};

class Solution2
{
public:
    std::string ReverseString(std::string w)
    {
        std::string Reversed;

        for (int i = w.length() - 1; i >= 0; i--)
        {
            Reversed += w[i];
        }
        return Reversed;
    }
};
int main()
{
    std::string W = "World";
    Solution2 s;
    std::cout << s.ReverseString(W) << std::endl;
    std::cin.get();
}