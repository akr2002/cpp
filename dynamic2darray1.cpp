#include <iostream>
#include <memory>

class Matrix
{
	private:
		std::size_t rows {};
		std::size_t cols {};
		std::shared_ptr<int[]> data {};

	public:
		Matrix() = default;
		Matrix(const int& row, const int& col) : rows{row}, cols{col}, data{std::make_shared<int[]>(row * col)} 
		{}

		inline std::size_t rowCount() const { return rows; }
		inline std::size_t colCount() const { return cols; }

		int* operator[](const std::size_t& row) const { return row * this->cols + data.get(); }
		int& operator()(const std::size_t& row, const std::size_t& col) const { return data[row * this->cols + col]; }
};

int main(int argc, char** argv)
{
	auto rows { std::stoi(argv[1]) };
	auto cols { std::stoi(argv[2]) };

	Matrix matrix { rows, cols };
}
