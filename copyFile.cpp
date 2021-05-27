#include <iostream>
#include <fstream>

int main(int argc, char** argv)
{
	std::string source { argv[1] } ;
	std::string destination { argv[2] } ;

	std::fstream src(source, std::ios::in | std::ios::out);
	if (!src) 
	{
		std::cout << "Could not open " << source << std::endl;
		src.close();
		return 0;
	}

	std::fstream dest(destination, std::ios::out | std::ios::in | std::ios::app);
	if (!dest)
	{
		std::cout << "Could not open " << destination << std::endl;
		src.close();
		dest.close();
		return 0;
	}

	std::string line {};

	while (src)
	{
		std::getline(src, line);
		dest << line << "\n";
	}

	dest.seekg(0, std::ios::beg);
	dest.seekp(0, std::ios::beg);

	while (dest)
	{
		std::getline(dest, line);
		std::cout << line << "\n";
	}

	std::cout << std::endl;

	src.close();
	dest.close();

	return 0;
}
