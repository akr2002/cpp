#include <iostream>
#include <iomanip>
#include <array>

template<class T, std::size_t _row, std::size_t _col>
class Matrix
{
	private: 
		std::array<std::array<T, _col>, _row> matrix;
	public: 
		Matrix() = default;
		void setMatrix();
		void printMatrix();
		Matrix operator+(Matrix m);
};

template<class T, std::size_t _row, std::size_t _col>
Matrix<T, _row, _col> Matrix<T, _row, _col>::operator+(Matrix m)
{
	int r = matrix.size();
	int c = matrix.at(0).size();

	Matrix<T, _row, _col> temp;
	for (std::size_t i {}; i < r; ++i)
	{
		for (std::size_t j {}; j < c; ++j)
		{
			temp.matrix.at(i).at(j) = this->matrix.at(i).at(j) + m.matrix.at(i).at(j);
		}
	}

	return temp;
}

template<class T, std::size_t _row, std::size_t _col>
void Matrix<T, _row, _col>::setMatrix()
{
	for (std::size_t i {}; auto& row : matrix)
	{
		for (std::size_t j {}; auto& col : row)
		{
			std::cout << "[" << i << "][" << j << "]: ";
			std::cin >> col;
			++j;
		}
		++i;
	}
}

template<class T, std::size_t _row, std::size_t _col>
void Matrix<T, _row, _col>::printMatrix()
{
	for (const auto& row : matrix)
	{
		for (const auto& col : row)
		{
			std::cout << std::setw(3) << std::left << col << " ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	Matrix<int, 3, 4> matrix1, matrix2, sum;
	matrix1.setMatrix();
	matrix2.setMatrix();
	sum = matrix1 + matrix2;
	sum.printMatrix();
	return 0;
}
