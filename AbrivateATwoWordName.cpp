#include <iostream>

class Soluiton
{
public:
    std::string AbraibateString(std::string s)
    {
        bool IsFirstLetter = true;
        std::string result = "";
        std::string delim = ".";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ' && IsFirstLetter)
            {
                s[i] = toupper(s[i]);
                result += s[i] + delim;
            }
            IsFirstLetter = s[i] == ' ' ? true : false;
        }
        return result.substr(0, result.length() - delim.length());
    }
};
class Soluiton2
{
public:
    std::string AbraibateString(std::string s)
    {

        std::string result = "";

        result += toupper(s[0]);
        result += ".";
        result += toupper(s[s.find(" ") + 1]);
        return result;
    }
};

int main()
{
    Soluiton2 S1;
    std::string s = "sam harris"; // output S.H

    std::cout << S1.AbraibateString(s) << std::endl;

    std::cin.get();
}