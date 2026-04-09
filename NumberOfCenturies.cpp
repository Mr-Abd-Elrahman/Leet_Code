#include <iostream>
#include <cmath>

/*the first century spears from the year 1 up to and including the year 100 the second cnetury
from the 101 up to and including the year 200 etc

task
Given a year return the century it is in
Examples:
1700 ----> 18
1900 ----> 19
1601 ----> 17
2000 ----> 20*/

class Solution
{
public:
    int CenturyFromYear(int Year)
    {
        // if (Year % 100 == 0)
        // {
        //     return Year / 100;
        // }
        // else
        // {
        //     return Year / 100 + 1;
        // }
        return Year % 100 == 0 ? Year / 100 : Year / 100 + 1;
    }
};
class SecondSolution
{
public:
    float CenturyFromYear(float Year)
    {

        return ceil(Year / 100);
    }
};
int main()
{

    float Year = 2026;

    Solution S1;
    SecondSolution S2;
    std::cout << "Century is : " << S1.CenturyFromYear(Year) << std::endl;

    std::cout << "Century is : " << S2.CenturyFromYear(Year) << std::endl;
    std::cin.get();

    return 0;
}