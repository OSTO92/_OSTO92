#include <ctest.h>
#include <libchessviz/check_move.h>

char chess_field[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                          {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                          {32, 32, 32, 32, 32, 32, 32, 32},
                          {32, 32, 32, 32, 32, 32, 32, 32},
                          {32, 32, 32, 32, 32, 32, 32, 32},
                          {32, 32, 32, 32, 32, 32, 32, 32},
                          {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                          {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

//Pawns


CTEST (check_move_pawns, white_pawn)
{
    ASSERT_EQUAL(0, check_move(chess_field[6][6], 'P'));
}





//Knights


CTEST (check_move_knights, white_knight)
{
    ASSERT_EQUAL(0, check_move(chess_field[7][1], 'N'));
}



//Bishops


CTEST (check_move_bishops, white_bishop)
{
    ASSERT_EQUAL(0, check_move(chess_field[0][5], 'B'));
}


//Queens


CTEST (check_move_queens, white_queen)
{
    ASSERT_EQUAL(0, check_move(chess_field[7][3], 'Q'));
}


//Kings


CTEST (check_move_kings, white_king)
{
    ASSERT_EQUAL(0, check_move(chess_field[7][4], 'K'));
}
