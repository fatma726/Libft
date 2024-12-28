#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);

	len1 = ft_strlen(s1); // حساب طول النص الأول
	len2 = ft_strlen(s2); // حساب طول النص الثاني

	new_str = (char *)malloc(len1 + len2 + 1); // تخصيص ذاكرة
	if (!new_str)
		return (NULL);

	ft_memcpy(new_str, s1, len1); // نسخ النص الأول
	ft_memcpy(new_str + len1, s2, len2); // نسخ النص الثاني
	new_str[len1 + len2] = '\0'; // إنهاء النص
	return (new_str);
}
