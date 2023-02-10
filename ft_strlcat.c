size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t len;

    len = ft_strlen(dst) + ft_strlen(src);
    if (dstsize <= ft_strlen(dst))
        return (ft_strlen(src) + dstsize); 
        dst++;
    i = 0;
    while ((i < dstsize - (len - ft_strlen(src)) - 1) && src[i])
    {
        dst[i] = src[i]; 
        i++;
    }
    dst[i] = '\0';
    return (len);
}
/*
int main()
{
char s1[] = "greencodia";
char s2[] = "game studio";
printf("%zu", ft_strlcat(s1, s2, 3)); 
}
*/
