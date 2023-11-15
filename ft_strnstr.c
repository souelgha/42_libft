
#include "libft.h"

char	*ft_strnstr(const char *big, const char * small, size_t n)
{
	size_t i;
	size_t j;
	size_t k;

	if (small[0] == '\0')
		return((char *)big);
	i = 0;
	j = 0;
	k = 0;
	while (big[i++] != '\0' && i < n)
	{
		if (big[i] == small[j])
		{
			k = i;
			while (big[i + j] == small[j])
				j++;
			if (j == strlen(small))
				return((char *)(big + k));
		}
	}
	return(0);
}
/*
#include<stdio.h>
//#include <bsd/string.h>
int main (void)
{
	size_t n = 11;
//	char *res1;
	char *res2;

//	res1 = strnstr("Foo Bar Baz", "Bar", n);
	res2 = ft_strnstr("Foo Bar Baz", "Ba", n);
	
//	printf("or=%s\n", res1);
	printf("so=%s\n", res2);

}*/