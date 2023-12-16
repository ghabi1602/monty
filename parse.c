#include "monty.c"

/**
 * parse - function that parses a string
 * @line: the line to be parsed
 * Return: array of strings
 */
char **parse(char *line)
{
	int c = 0, i;
	char buff[50], **a[2], str[20], num[20];

	i = -1;
	while ((line[c] != ' ') && (line[c] != '\0'))
	{
		i++;
		buff[i] = line[c];
		c++;
	}
	buff[i++] = '\0';

	i = 0;
	c = -1;
	while ((isalpha(buff[i])) && (buff[i] != '\0'))
	{
		c++;
		str[c] = buff[i];
		i++;
	}
	str[c++] = '\0';

	i = 0;
	c = -1;
	while ((!isalpha(buff[i])) && (buff[i] != '\0'))
	{
		c++;
		num[c] = buff[i];
		i++;
	}
	num[c++] = '\0';
	a[0] = strdup(str);
	a[1] = strdup(s);
}
