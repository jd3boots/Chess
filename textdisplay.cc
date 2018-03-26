#include "textdisplay.h"
#include "gamemaster.h"
#include "boardelement.h"
#include "gameboard.h"
#include <iostream>
#include <vector>

using namespace std;

TextDisplay::TextDisplay(GameBoard board)
{
    std::vector<char> temp;
    for(int i  = 0; i < board_size; i++)
    {
        for(int j = 0; j < board_size; j++)
        {
            if(board.getElement(i, j).getPiece() == PieceType::Pawn) {
                temp.push_back('P');
            } else {
                temp.push_back('E');
            }
        }
        theDisplay.push_back(temp);
    }
}

std::ostream &operator<<(std::ostream &out, const TextDisplay &td)
{
    for(int i = 0; i < board_size; i++)
    {
        for(int j = 0; j < board_size; j++)
        {
            out << td.theDisplay[i][j];
        }
        out << std::endl;
    }
    return out;
}

void TextDisplay::notify(GameState state)
{
    
}