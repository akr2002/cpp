// C++ program to implement gravity/bead sort
#include <stdio.h>
#include <string.h>

#define BEAD(i, j) beads[i * max + j]

// function to perform the above algorithm
void beadSort(int *a, int len)
{
	// Find the maximum element
	int max = a[0];
	for (int i = 1; i < len; ++i)
		if (a[i] > max)
			max = a[i];

	// allocating memory
	unsigned char beads[max*len];
	memset(beads, 0, sizeof(
}
