void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	if (count * size < count)
		return (NULL);
	result = malloc(size * count);
	if (!result)
		return (0);
	ft_bzero(result, size * count);
	return (result);
}