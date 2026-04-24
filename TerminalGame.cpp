#include <iostream>

// input (3,6)  output------>15
class Soultion
{
public:
    int move(const int position, const int roll)
    {
        return position + roll * 2;
    }
};

int main()
{
    Soultion S1;
    int position = 4;
    int roll = 5;
    std::cout << "position is: " << S1.move(position, roll) << std::endl;

    std::cin.get();
}