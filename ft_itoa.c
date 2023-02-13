#include "libft.h"
#include <stdio.h>

int ft_intlen(int n)
{
	int a = 0;

	if (n <= 0)
	{
		n = n * -1;
		a++;
	}
	while( n != 0)
	{
		n = n/ 10;
		a++;
	}
	return(a);
}

char *ft_itoa(int n)
{
	char *s;
	long int temp;
	int a;
	int p;

	temp = n;
	a = ft_intlen(n);
	s = malloc((a + 1) * sizeof(char));
	s[a] = '\0';
	if (!s)
		return(NULL);
	if(temp < 0)
	{
		s[0] = '-';
		temp = temp * -1;
		p = 1;
	}
	else if(temp == 0)
	{
		s[0] = '0';
		return(s);
	}
	while(a >= 1)
	{
		s[a - 1] = (temp % 10 )+ 48;
		temp = temp / 10;
		a--;
	}
	if (p == 1)
		s[0] = '-';
	return(s);
}
