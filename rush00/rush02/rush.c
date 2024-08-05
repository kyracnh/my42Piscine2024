#include <unistd.h>
void ft_putchar(char pu);
void line_ac(int x)
{
	int i;
	i = 1;

	while(i <= x)
	{
		if(i == 1)
		{
			ft_putchar('A');
		}else if(i == x)
		{
			ft_putchar('A');
		}else
		{
			ft_putchar('B');
		}
	i++;
	}
}


void line_bb(int x)
{
	int i;
	i = 1;

	while(i <= x)
	{
		if(i == 1)
		{
			ft_putchar('B');
		}else if(i == x)
		{
			ft_putchar('B');
		}else
		{
			ft_putchar(' ');
		}
	i++;
	}
}


void line_ca(int x)
{
	int i;
	i = 1;

	while(i <= x)
	{
		if(i == 1)
		{
			ft_putchar('C');
		}else if(i == x)
		{
			ft_putchar('C');
		}else
		{
			ft_putchar('B');
		}
	i++;
	}
}


void rush(int x, int y)
{
	int i;
	i = 1;
	
	if(x >= 1 && y >= 1)
	{
	while(i <= y)
	{
	
		if(i == 1)
		{
			line_ac(x);
			ft_putchar('\n');
		}else if(i == y)
		{
			line_ca(x);
			ft_putchar('\n');
		}else
		{
			line_bb(x);
			ft_putchar('\n');
		}
		i++;
	}
	}
}
