#include <iostream>
#include <fstream>

int main()
{
	std::string uid, name;
	std::fstream file("info.txt", std::ios::trunc | std::ios::in | std::ios::out);

	std::cout << "Enter name: ";
	std::getline(std::cin, name);
	std::cout << "Enter UID: ";
	std::getline(std::cin, uid);

	std::clog << "\nWriting into file...";
	file << "Name: " << name << "\nUID: " << uid << "\n";
	std::clog << "Done.\n";

	std::string line;

	std::clog << "\nReading from file...\n\n";
	file.seekg(0, std::ios::beg);

	while (file)
	{
		std::getline(file, line);
		std::cout << line << "\n";
	}

	std::clog << "Done.\n";
	file.close();

	return 0;
}
