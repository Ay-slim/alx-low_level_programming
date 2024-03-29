/**
 * print_name - Print name
 * @name: name
 * @f: callback
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
