#include <stdio>

int main()
{
	long long int num = 2398093202265259;
	long int factor1 = 2;
	long int factor2;


	while (num % factor1)
	{
		if (factor1 <= num)
		{
			factor1++;
		}
		else {
			return (-1);
		}
	}

	factor2 = num / factor1;
	print("%11d = %1d * %1d\n", num, factor2, factor1);
	return(0);

}
