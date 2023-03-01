#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;	

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}

int main()
{
	printf("lcm:%i\n", lcm(5, 7));
}

/* LOGIC:
LCM example
Formula used: You can calculate every multiples of each integers until you have 
a common multiple other than 0
5
	5
	10
	15
	20
	25
	30
x7	35
7
	7
	14
	21
	28
x5	35
LCM of 5 and 7 is 		35
*/
