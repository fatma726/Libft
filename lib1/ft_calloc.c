#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size) 
{
    void *ptr;

    // Calculate the total size needed
    size_t total_size = nmemb * size;

    // Allocate memory
    ptr = malloc(total_size);
    if (!ptr) 
	{
        // If allocation fails, return NULL
        return NULL;
    }

    // Initialize the allocated memory to 0
    memset(ptr, 0, total_size);

    return ptr;
}