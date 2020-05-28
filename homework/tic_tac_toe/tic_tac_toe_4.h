#ifndef TIC_TAC_TOE_4
#define TIC_TAC_TOE_4
#include "tic_tac_toe.h"

class TicTacToe4 : public TicTacToe
{
public:
	TicTacToe4() : TicTacToe(GameType::four) {}
	TicTacToe4(std::vector<std::string> s);

private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();

};
#endif // !TIC_TAC_TOE_4
