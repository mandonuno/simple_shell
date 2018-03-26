/**
 * _atoi - convert a string to a integer
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int i, sign, val;

	i = 0;
	sign = -1;
	val = 0;
	while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		val = (val * 10) - (s[i] - '0');
		i++;
	}
	return (val * sign);
}
