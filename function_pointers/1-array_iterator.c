#include "function_pointers.h"
/** 
  E+
  *array_iterator - executes a function given as a parameter on each element
  *@size: check the size
  *@action: pointer to the function
  *@array: check the array
  *Return: eturns the index of the first element and size <= 0, return -1
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
	{
	return;
	}
	if (action == NULL)
	{
	return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
