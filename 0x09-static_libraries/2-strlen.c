/**
 * _strlen - Returns the length of a string
 * @s: pointer to char array
 * Return: size of array
 */
int _strlen(char *s)
{
	int i;

	while (*(s + i) != 0)
		i++;
	return (i);
}
