#include "libft.h"
char	*ft_strjoin(char const*s1,char const *s2)
{
	int lens1 = strlen(s1);
	int lens2 = strlen(s2);
	int i;
	char *s3;

	s3 = malloc(lens1 + lens2);
	i = 0;
	if(!s3)
		return (0);
	if (!s2 || !s1)
		return(0);
	else
	{
		while(i <= lens1)
		{
			s3[i] = s1[i];
			i++;
		}
		i = 0;
		while(i <= lens2)
		{
			s3[lens1 + i] = s2[i];
			i++;
		}
		return(s3);
	}
}