#include <iostream>

class Solution
{
public:
    std::string Rock_Paper_Scissors(const std::string &player1, const std::string &player2)
    {
        std::string msg = "";
        std::string P1Win = "Player 1 win";
        std::string P2Win = "Player 2 win";
        std::string Draw = "Draw";

        if (player1 == player2)
        {
            msg = Draw;
        }
        else if (player1 == "Rock" && player2 == "Scissors")
        {
            msg = P1Win;
        }
        else if (player1 == "Paper" && player2 == "Rock")
        {
            msg = P1Win;
        }
        else if (player1 == "Scissors" && player2 == "Paper")
        {
            msg = P1Win;
        }
        else
        {
            msg = P2Win;
        }
        return msg;
    }
};

int main()
{
    Solution S1;

    std::string Player1 = "Paper";
    std::string PLayer2 = "Paper";

    std::cout << S1.Rock_Paper_Scissors(Player1, PLayer2) << std::endl; // output player 2 win

    std::cin.get();
}
