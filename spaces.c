int count_spaces(const char *format, int index)
{
	int x;
	char *space;

	space = " ";
	for (x = 1; format[index + x] == space[0]; x++)
		;
	return (x - 1);
}
