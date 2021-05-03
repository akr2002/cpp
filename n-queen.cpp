#include <iostream>
#include <vector>

int attacked(int i, int j, const auto& board, int N)
{
	// checking for column j
	for (int k {1}; k <= i - 1; ++k)
	{
		if (board[k][j] == 1)
			return 1;
	}

	// checking upper right diagonal
	for (int k {i - 1}, l {j + 1}; k >= 1 && l <= N; ++k, ++l)
	{
		if (board[k][l] == 1)
			return 1;
	}
	
	// checking for upper left diagonal
	for (int k {i - 1}, l {j - 1}; k >= 1 && l >= 1; --k, --l)
	{
		if (board[k][l] == 1)
			return 1;
	}

	return 0;
}

int nqueen(int row, int n, int N, auto& board)
{
	if (n == 0)
		return 1;

	for (int j {1}; j <= N; ++j)
	{
		if (!attacked(row, j, board, N))
		{
			board[row][j] = 1;

			if (nqueen(row+1, n - 1, N, board))
				return 1;

			board[row][j] = 0;	// backtracking
		}
	}

	return 0;
}

template<typename T>
std::ostream& operator<< (std::ostream& out, const std::vector<std::vector<T>>& board)
{
	for (const auto& row : board)
	{
		for (const auto& col : row)
		{
			out << col << " ";
		}
		out << std::endl;
	}

	return out;
}

int main(int argc, char** argv)
{
	auto n { std::stoi(argv[1]) };

	/*int **board = new int* [n];
	for (std::size_t i {}; i < n; ++i)
	{
		board[i] = new int[n];
	}*/

	auto board { std::vector<std::vector<int>>(n, std::vector<int>(n, 0)) };

	nqueen(1, n, n, board);

	std::cout << board << std::endl;

	/*for (std::size_t i {}; i < n; ++i)
	{
		delete[] board[i];
	}

	delete[] board;*/

	return 0;
}
