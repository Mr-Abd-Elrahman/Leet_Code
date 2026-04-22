#include <iostream>

#include <vector>

class Solution
{
public:
    bool Check(const std::vector<std::string> &seq, const std::string &elem)
    {

        for (int i = 0; i < seq.size(); i++)
        {
            if (seq[i] == elem)
            {
                return true;
            }
        }
        return false;
    }
};
/*Mistake:i put else after if inside the loop it looks like
i'm telling him if you don't find the word in  the first index return false
without complete checking and this is so wrong the right is after checking all the
string to the end of the loop if you don't find the word return false (at the end of the loop) */

int main()
{

    Solution S1;

    std::vector<std::string> s = {"zkaria", "arafat", "seaaed", "taha"};
    std::string element = "arafat";

    std::cout << S1.Check(s, element) << std::endl;

    std::cin.get();
}