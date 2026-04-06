
#include <iostream>
#include <string>
using namespace std;

/*You are given two strings word1 and word2. Merge the strings by adding letters in alternating order,
 starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.



Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
Example 2:

Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b
word2:    p   q   r   s
merged: a p b q   r   s
Example 3:

Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q
merged: a p b q c   d


Constraints:

1 <= word1.length, word2.length <= 100
word1 and word2 consist of lowercase English letters.*/

/*In this broblem we deal with the string as array Word1[i]  we used a while loop and if condition
we start the loop from 0 to the size of the two words and we use if to check if
one of the words is shorter or longer than the other we used a Result variable to store the final result */

class Solution
{
public:
    string _Word1;
    string _Word2;
    string mergeAlternately(string word1, string word2)
    {
        std::string Result = "";
        int i = 0;
        while (i < word1.size() || i < word2.size())
        {
            if (i < word1.size())
            {
                _Word1 += word1[i];
                Result += word1[i];
            }
            if (i < word2.size())
            {
                _Word2 += word2[i];
                Result += word2[i];
            }
            i++;
        }
        return Result;
    }
};

// Another solution

class clsSolution
{
public:
    string _Word1 = "";
    string _Word2;
    string mergeAlternately(string word1, string word2)
    {
        std::string Result = "";
        int i = 0;
        for (int i = 0; i < word1.size() + word2.size(); i++)
        {
            if (i < word1.size())
            {
                Result += word1[i];
                _Word1 += word1[i];
            }

            if (i < word2.size())
            {
                Result += word2[i];
                _Word2 += word2[i];
            }
        }
        return Result;
    }
};

int main()
{
    std::string Word1 = "cccaa";
    std::string Word2 = "111";
    clsSolution Solution1;
    string Merge = Solution1.mergeAlternately(Word1, Word2);

    std::cout << "Word1 : " << Solution1._Word1 << std::endl;
    std::cout << "Word2 : " << Solution1._Word2 << std::endl;
    std::cout << "merge : " << Merge << std::endl;

    std::cin.get();

    return 0;
}
