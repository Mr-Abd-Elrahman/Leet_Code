#include <iostream>

class Solution
{
public:
    std::string greeting(std::string name)
    {
        // return name == "Johonny" ? "Hello,My Love!" : "Hello, " + name + "!";

        return "Hello, " + (name == "Johnny" ? "My Love" : name) + "!";
    }
};

int main()
{
    Solution S1;

    std::string name = "Abdo";

    std::cout << S1.greeting(name) << std::endl;

    std::cin.get();
}
