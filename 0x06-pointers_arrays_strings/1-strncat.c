/*
 * _strncat - concatenates two strings
 * @dest: pointer to the destination string
 *  * @src: pointer to the source string
 *   * @n: number of bytes to print
 *    * Return: pointer to the resulting string dest
 *     */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
