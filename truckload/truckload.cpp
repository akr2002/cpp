#include <iostream>
#include "truckload.h"

void Truckload::listBoxes() const
{
	const std::size_t boxesPerLine {5};
	std::size_t count {};
	Package* currentPackage{pHead};

	while (currentPackage)
	{
		currentPackage->getBox()->listBox();
		if (!(++count % boxesPerLine)) std::cout << std::endl;
		currentPackage = currentPackage->getNext();
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
	if (!pCurrent)			// If there is no current...
		return getFirstBox();	// ...return the 1st box

	pCurrent = pCurrent->getNext();	// Move to the next package

	return pCurrent ? pCurrent->getBox() : nullptr;	// Return its box (or nullptr...).
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
	for (Package* package{src.pHead}; package; package = package->getNext())
	{
		addBox(package->getBox());
	}
}

void Truckload::addBox(SharedBox pBox)
{
	auto pPackage = new Package {pBox};	// Create a new Package

	if (pTail)	// Check list is not empty
		pTail->setNext(pPackage);	// Append the new object to the tail
	else	// List is empty
		pHead = pPackage;	// so new object is the head

	pTail = pPackage;	// Either way: the latest object is the (new) tail
}

bool Truckload::removeBox(SharedBox boxToRemove)
{
	Package* previous {nullptr};	// no previous yet
	Package* current {pHead};	// initialize the current to the head of the list

	while (current)
	{
		if (current->getBox() == boxToRemove)	// We found the box
		{
			if (previous)	// If there is a previous Package...
			{
				previous->setNext(current->getNext());	// ...make it point to the next package
			}
			else
			{	// If there is no previous, we are removing the first Package in the list,
				// so update pHead
				pHead = current->getNext();
			}

			current->setNext(nullptr);	// Disconnect the current package from the list
			delete current;			// and delete it

			return true;			// Return true: we found and removed the box
		}

		// Move both the pointers along (mind the order!)
		previous = current;	// - first current becomes the new previous
		current = current->getNext();	// - then move current along to the next Package
	}

	return false;	// Return false: boxToRemove was not found
}

