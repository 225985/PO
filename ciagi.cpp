#include <stdio.h>
#include <stdlib.h>

long int Fibonacci (int n)
{
	if(n > 2)
		return Fibonacci(n-1)+Fibonacci(n-2);
	else
		return 1;
}

long int Geometryczny (int n)
{
	if(n > 1)
		return 4*Geometryczny(n-1);
	else
		return 1;
}

int main (int argc, char* argv[])
{
	int ile = atoi(argv[1]);

	if(argv[2][0] == 'f')
	{
		for(int i = 1; i <= ile; i++)
		{
			long int wyraz = Fibonacci(i);
			printf("%ld\n", wyraz);
		}
	}

	else if(argv[2][0]=='g')
	{
		for(int i = 1; i <= ile; i++)
		{
			long int wyraz = Geometryczny(i);
			printf("%ld\n", wyraz);
		}
	}
}