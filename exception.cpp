#include <iostream>

class myclass
{
	private:
		FILE *m_file;

	public:
		myclass(const char *filename) : m_file{fopen(filename, "rb")}
		{
			if (m_file == 0)
			{
				throw std::runtime_error("unable to open file");
			}
		}

		~myclass()
		{
			fclose(m_file);
			std::clog << "Hello from destructor\n";
		}
};

int main(void)
{
	myclass c1("test.txt");

	try
	{
		myclass c2("does_not_exist.txt");
	}

	catch(const std::exception &e)
	{
		std::cout << "exception: " << e.what() << '\n';
	}
}
