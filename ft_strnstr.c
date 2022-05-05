char *strstr(const char *haystack, const char *needle size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;

	if (len == 0)
		return(NULL);

	while (haystack[i] && i < len)
	{
		while(needle[j] && haystack[i+j] == needle[j])
		{
			return ((char *)haystack[i+j]);
		j++
		}
		i++
		return (haystack)
	}
