void	ft_putchar(char c);

void	line(char a, char b, int x)
{
	int	i;

	ft_putchar(a);
	if (x > 2)
	{
		i = 0;
		while (i < (x - 2))
		{
			ft_putchar(b);
			i = i + 1;
		}
	}
	if (x > 1)
		ft_putchar(a);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
		return ;
	line('A', 'B', x);
	if (y > 2)
	{
		i = 0;
		while (i < (y - 2))
		{
			line('B', ' ', x);
			i++;
		}
	}
	if (y > 1)
	{
		line('C', 'B', x);
	}
}
