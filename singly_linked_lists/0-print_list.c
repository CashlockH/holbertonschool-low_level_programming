size_t print_list(const list_t *h)
{
	int count = 0;

	if (h->str == NULL)
	{
		printf("%s\n", "[0], (nil)");
	}
	else
		printf("[%d] %s\n", h->len, h->str);
	count++;
	if (h->next == NULL)
		return (count);
	count = count + print_list(h->next);
	return (count);
}
