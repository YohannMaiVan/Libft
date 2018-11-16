void	ft_strclr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
}

int main (void)
{
	char *str = "tototo";	
	ft_strclr(str);
	return (0);
}