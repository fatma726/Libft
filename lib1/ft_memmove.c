#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{

    unsigned char *d; // مؤشر للهدف
    const unsigned char *s; // مؤشر للمصدر
    size_t i; // متغير عداد

    // تحويل المؤشرات إلى unsigned char* لتسهيل التعامل مع البايتات
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;

    // تحقق إذا كانت المؤشرات غير صالحة
    if (!dest && !src) 
	{
        return NULL;
    }

    if (d > s && d < s + n)
	{ // حالة وجود تداخل، النسخ للخلف
        i = n;
        while (i > 0) 
		{
            i--;
            d[i] = s[i];
        }
    } else 
	{ // لا يوجد تداخل، النسخ للأمام
        i = 0;
        while (i < n) 
		{
            d[i] = s[i];
            i++;
        }
    }

    return dest;
}

