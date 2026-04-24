#include <iostream>

class Solution
{

public:
    std::string Text_Of_The_Number(int Number)
    {
        switch (Number)
        {
        case 1:
            return "one";
            break;
        case 2:
            return "two";
            break;
        case 3:
            return "three";
            break;
        case 4:
            return "four";
            break;
        case 5:
            return "five";
            break;
        case 6:
            return "six";
            break;
        case 7:
            return "seven";
            break;
        case 8:
            return "eight";
            break;
        case 9:
            return "nine";
            break;

        default:
            return 0;
            break;
        }
    }
};

class Solution2
{
private:
    long long _Num;
    void ReadNumber()
    {
        std::cout << "Enter Number? ";
        std::cin >> _Num;
        std::cout << std::endl;
    }
    std::string NumberToText(long long Number)
    {

        if (Number == 0)
        {
            return "";
        }
        if (Number >= 1 && Number <= 19)
        {
            std::string Array[] =
                {"", "one", "two", "three", "four",
                 "five", "six", "seven", "eight", "nine", "ten",
                 "eleven", "twelve", "thirteen",
                 "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
            return Array[Number];
        }
        if (Number >= 20 && Number <= 99)
        {
            std::string Array[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
            return Array[Number / 10] + " " + NumberToText(Number % 10);
        }
        if (Number >= 100 && Number <= 199)
        {
            return "one Hundred " + NumberToText(Number % 100);
        }
        if (Number >= 200 && Number <= 999)
        {
            return NumberToText(Number / 100) + " Hundreds " + NumberToText(Number % 100);
        }
        if (Number >= 1000 && Number <= 1999)
        {
            return "one thousand" + NumberToText(Number % 1000);
        }
        if (Number >= 2000 && Number <= 999999)
        {
            return NumberToText(Number / 1000) + " thousand " + NumberToText(Number % 1000);
        }
        if (Number >= 1000000 && Number <= 1999999)
        {
            return "one million" + NumberToText(Number % 1000000);
        }
        if (Number >= 2000000 && Number <= 999999999)
        {
            return NumberToText(Number / 1000000) + " millions " + NumberToText(Number % 1000000);
        }
        if (Number >= 1000000000 && Number <= 1999999999)
        {
            return "one billion" + NumberToText(Number % 1000000000);
        }
        if (Number >= 2000000000 && Number <= 999999999999)
        {
            return NumberToText(Number / 1000000000) + " billions " + NumberToText(Number % 1000000000);
        }
        if (Number >= 1000000000000 && Number <= 1999999999999)
        {
            return "one trillion" + NumberToText(Number % 1000000000000);
        }
        if (Number >= 2000000000000 && Number <= 999999999999999)
        {
            return NumberToText(Number / 1000000000000) + " trillions " + NumberToText(Number % 1000000000000);
        }
        return "";
    }

public:
    void ReadAndConvertNumberToText()
    {
        char answer = 'n';

        do
        {
            system("clear");

            ReadNumber();
            std::cout << "Text Number: " << NumberToText(_Num) << std::endl;
            std::cout << "\nDo you want to add more number?Y/N?";
            std::cin >> answer;
        } while (toupper(answer) == 'Y');
    }
};
int main()
{

    Solution2 S1;

    S1.ReadAndConvertNumberToText();

    std::cin.get();
}