#include "libft.h"

char **ft_split(char const *s, char c)
{
    char **result;
    int i = 0, start = 0, len = 0, word_count = 0;

    // حساب عدد الكلمات لتخصيص الذاكرة
    while (s[len])
    {
        if ((s[len] != c && (len == 0 || s[len - 1] == c)))
            word_count++;
        len++;
    }
    result = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (!result)
        return NULL;

    len = 0; // إعادة استخدام len للمشي داخل النص
    while (s[len])
    {
        if (s[len] != c)
        {
            start = len;
            while (s[len] && s[len] != c)
                len++;
            result[i++] = ft_substr(s, start, len - start); // نسخ الكلمة
        }
        else
            len++;
    }
    result[i] = NULL; // إنهاء الـ array بـ NULL
    return result;
}
