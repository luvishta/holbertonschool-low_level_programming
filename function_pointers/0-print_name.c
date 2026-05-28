#include "function_pointers.h"
/**
  *print_name - prints a name
  *@name: name of the person
  *@f:function pointers
  */
void print_name(char *name, void (*f)(char *))
{

	if (name == NULL)

		return;

	if (f == NULL)

		return;
	f(name);
}
