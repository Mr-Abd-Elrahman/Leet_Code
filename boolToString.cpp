#include <iostream>

class Sol
{
public:
    std::string Boolean_To_String(bool b)
    {
        return b ? "true" : "false";
    }
};

int main()
{
    Sol s;

    bool b = false;

    std::cout << s.Boolean_To_String(b) << std::endl;
    std::cin.get();
}