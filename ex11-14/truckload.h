#ifndef TRUCKLOAD_H
#define TRUCKLOAD_H

#include "package.h"

class Truckload
{
	private:
		Package* pHead {};	// First in the list
		Package* pTail {};	// Last in the list
		Package* pCurrent {};	// Last retrieved from the list

	public:
		Truckload() = default;	// Default constructor - empty Truckload

		Truckload(SharedBox pBox)	// Constructor - one box
		{ pHead = pTail = new Package{pBox}; }

		Truckload(const std::vector<SharedBox>& boxes);	// Constructor - vector of boxes

		Truckload(const Truckload& src);	// Copy constructor

		~Truckload() { delete pHead; }	// Destructor - clean up the list

		SharedBox getFirstBox();	// Get the first box
		SharedBox getNextBox(); 	// Get the next box
		void addBox(SharedBox pBox);	// Add a new box
		bool removeBox(SharedBox pBox);	// Remove a Box from the Truckload
		void listBoxes() const;		// Output the boxes
};

void Truckload::listBoxes() const
{
	const std::size_t boxesPerLine = 5;
	std::size_t count {};
	for (Package* package{pHead}; package; package = package->getNext())
	{
		package->getBox()->listBox();
		if (! (++count % boxesPerLine)) std::cout << std::endl;
	}
	if (count % boxesPerLine) std::cout << std::endl;
}



#endif

