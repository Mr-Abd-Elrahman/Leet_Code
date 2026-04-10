#include <iostream>
#include <vector>

class Sol
{
public:
    std::vector<int> Invert(std::vector<int> Values)
    {
        for (int i = 0; i <= Values.size() - 1; i++)
        {
            Values[i] *= -1;
        }
        return Values;
    }
};

int main()
{
    Sol s;

    std::vector<int> Values = {1, 2, 3};

    std::vector<int> v = s.Invert(Values);

    std::cout << "{" << v[0] << "," << v[1] << "," << v[2] << "}" << std::endl;

    std::cin.get();
}