
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;
    if (!dst && !src)
        return NULL;
    while (n--)
        *d++ = *s++;
    return dst;
}