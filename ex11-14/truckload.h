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

SharedBox Truckload::getFirstBox()
{
	// Return pHead's box (or nullptr if the list is empty)
	pCurrent = pHead;
	return pCurrent ? pCurrent->getBox() : nullptr;
}

SharedBox Truckload::getNextBox()
{
	if (!pCurrent)	// If there is no current...
		return getFirstBox();	// ...return the 1st box

	pCurrent = pCurrent->getNext();	// Move to the next package

	return pCurrent ? pCurrent->getBox() : nullptr;	// Return its box or nullptr
}

Truckload::Truckload(const std::vector<SharedBox>& boxes)
{
	for (const auto& pBox : boxes)
	{
		addBox(pBox);
	}
}

Truckload::Truckload(const Truckload& src)
{
	for (Package* package{src.pHead}; package; package->getNext())
	{
		addBox(package->getBox());
	}
}

void Truckload::addBox(SharedBox pBox)
{
	auto pPackage = new Package{pBox};	// Create a new Package

	if (pTail)	// Check list is not empty
		pTail->setNext(pPackage);	// Append the new object to the tail
	else pHead = pPackage;	// List is empty so new object is the head

	pTail = pPackage;	// Either way: the latest object is the (new) tail
}

bool Truckload::removeBox(SharedBox boxToRemove)
{
	Package* previous {nullptr};	// no previous yet
	Package* current {pHead};	// Initialize current to the head of the list
	while (current)
	{
		if (current->getBox() == boxToRemove)	// We found the Box!
		{
			if (previous)	// Of there is a previous package
			{
				previous->setNext(current->getNext());	// ...make it point to the next Package
			}
			// If there is no previous, we are removing the first Package in the list, so update pHead
			else pHead = current->getNext();

			current->setNext(nullptr);	// Disconnect the current Package from the list
			delete current;	// and delete it

			return true;	// Return true: we found and removed the Box
		}

		// Move both pointers along (mind the order!)
		previous = current;	// - first current becomes the new previous
		current = current->getNext();	// - then move along to the next Package
	}

	return false;	// Return false: boxToRemove was not found
}

#endif

