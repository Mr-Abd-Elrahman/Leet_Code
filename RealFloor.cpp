#include <iostream>
/*The Americans are odd people:in their buildings,the first floor is actually the ground floor and
there is no 13th floor (due to superstition).

write a function that given a floor in the american system returns the floor in the eruopean system example
0 => 0
-1 => -1
8 => 7
15 => 13 */
class Solution
{
public:
    int Get_Real_Floor(int f)
    {
        if (f <= 0)
        {
            return f;
        }
        else if (f < 13)
        {
            return f - 1;
        }
        else
        {
            return f - 2;
        }
    }
};
class Solution2
{
public:
    int Get_Real_Floor(int f)
    {
        return f <= 0 ? f : f < 13 ? f - 1
                                   : f - 2;
    }
};

int main()
{
    Solution S1;
    Solution2 S2;
    int f = 15;
    std::cout << "Floor: " << S1.Get_Real_Floor(f) << std::endl;
    std::cout << "Floor: " << S2.Get_Real_Floor(f) << std::endl;

    std::cin.get();
    return 0;
}