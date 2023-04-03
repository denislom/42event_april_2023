#include <stdio.h>

//https://ece.uwaterloo.ca/~dwharder/icsrts/C/05/
int	main(int argc, char **argv)
{
	int	i;
	int result;
	int aces;

	i = 0;
	result = 0;
	aces = 0;
	if ( argc == 1 )
		printf("No arguments were passed.\n" );
	if (argc == 2){
		while (argv[1][i])
		{
            if ((argv[1][i] >= '2' && argv[1][i] <= '9') ||
				argv[1][i] == 'A' || argv[1][i] == 'Q' ||
				argv[1][i] == 'K' || argv[1][i] == 'J' ||
				argv[1][i] == 'D')
			{
				if (argv[1][i] >= '2' && argv[1][i] <= '9')
				{
					result += argv[1][i] - '0';
				}
				else if (argv[1][i] == 'J' || argv[1][i] == 'Q' ||
					argv[1][i] == 'D' || argv[1][i] == 'K' || argv[1][i] == 'T')
				{
					result += 10;
				}
				
			}
			else if (argv[1][i] == 'J')
			{
				/* code */
			}
			
			// if (argv[1][i])
			// {
			// 	/* code */
			// }
		}
	}
	return (0);
}
