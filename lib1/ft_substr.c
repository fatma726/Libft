#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	size_t	substr_len;
	char	*substr;

	if (!s) // إذا النص فارغ
		return (NULL);

	str_len = ft_strlen(s); // نحسب طول النص الأصلي
	if (start >= str_len)   // لو الموضع خارج النص
		return (ft_strdup(""));

	substr_len = ft_min(len, str_len - start); // نحدد طول الجزء الجديد
	substr = (char *)malloc(substr_len + 1);   // تخصيص ذاكرة
	if (!substr) // لو التخصيص فشل
		return (NULL);

	ft_memcpy(substr, s + start, substr_len); // نسخ النص
	substr[substr_len] = '\0'; // إنهاء النص
	return (substr); // إرجاع الجزء الجديد
}
