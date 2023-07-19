#include "function_pointers.h"
/**
 * print_name - prints the name
 * @name: character string
 * @f: function pointer
 * 
*/
void print_name(char *name, void (*f)(char *))
{
    if (f)
    {
        f(name)
    }

}
