#include <iostream>
/*You were camping with friends far away from home. but when it's time to go back,you
realize that your frel is running out and the nearest pump is 50 miles away!! You know that on
average, your car runs on aoubt 25 miles per gallon.There are 2 gallons left

Considering these factors, write a function that tells you if it is possible to get to the pumpor
not

Function should return true if it is possible and false if not*/
class Solution
{
public:
    bool Zero_Fuel(int distance_to_pump, int mpg, int fuel_left)
    {
        return mpg * fuel_left >= distance_to_pump;
    }
};

int main()
{

    Solution S1;

    if (S1.Zero_Fuel(100, 200, 1))
    {
        std::cout << "true\n";
    }
    else
    {
        std::cout << "false\n";
    }
    std::cin.get();
}