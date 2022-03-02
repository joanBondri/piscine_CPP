#include <iostream>

void	modif_upper_case(char *s)
{
	int		i;
	const int	gap = 'A' - 'a';

	i = -1;

	while (s[++i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] += gap;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (--argc)
		{
			modif_upper_case(argv[argc]);
			std::cout << argv[argc];
		}
		std::cout << std::endl;
	}
	return (0);
}
