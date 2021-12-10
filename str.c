#include "sshell.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: first string.
 * @src: second string.
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int n;
	int i = 0;
	int j = 0;
	int k = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		j++;
	}
	for (n = i; n <= i + j; n++)
	{
		dest[n] = src[k];
		k++;
	}
	return (dest);
}
/**
 * _strcmp - function that compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: n.
 */
int _strcmp(char *s1, char *s2)
{
	int k;
	int i = 0;
	int j = 0;
	int l = 0;
	int n = 0;

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (i <= j)
	{
		k = i;
	}
	else
	{
		k = j;
	}
	while (l <= k)
	{
		if (s1[l] == s2[l])
		{
			l++;
			continue;
		}
		else
		{
			n = s1[l] - s2[l];
			break;
		}
		l++;
	}
return (n);
}
