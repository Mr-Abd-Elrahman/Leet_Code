#include <iostream>

class sol
{
public:
    std::string EvenOrOdd(int Num)
    {
        return Num % 2 == 0 ? "Even" : "Odd";
    }
};

int main()
{

    sol s;
    int num = 4;
    std::cout << s.EvenOrOdd(num) << std::endl;
    std::cin.get();
    return 0;
}