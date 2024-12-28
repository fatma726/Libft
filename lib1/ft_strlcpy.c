#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < (size - 1)) ///nul termnated 
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}


// #include <stdio.h>
// #include "libft.h"

// int main()
// {
//     char src[] = "Hello, world!";
//     char dest[8];

//     size_t result = ft_strlcpy(dest, src, sizeof(dest));

//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dest);
//     printf("Length of source: %zu\n", result);

//     return 0;
// }