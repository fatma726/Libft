#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
 	size_t i;
    char *ptr;

    ptr = (char *)s; // تحويل المؤشر s إلى نوع char*
    i = 0;
    while (i < n)
    {
        ptr[i] = 0; // تصفير كل بايت
        i++;
    }
}


// #include <stdio.h>
// #include "libft.h"

// int main()
// {
//     char str[10] = "Hello1234";
//     printf("Before ft_bzero: %s\n", str);

//     ft_bzero(str, 5);

//     printf("After ft_bzero: %s\n", str);

//     int i = 0;
//     while (i < 5)
//     {
//         printf("str[%d]: %d\n", i, str[i]);
//         i++;
//     }
		free;
//     return 0;
// }