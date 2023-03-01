#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char byte;
	int i;
	int n;
	int power;

	byte = 0;
	i = 7;
	while (i >= 0)
	{
		if (octet << i & 128)
		{
			n = 0;
			power = 1;
			if (i == 0)
				power = 1;
			while (n < i)
			{
				power *= 2;
				n++;
			}
			byte += power;
		}
		i--;
	}
	return (byte);
}

/* another form to do */
unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

int main()
{
	printf("%i\n", reverse_bits(2));
	printf("%i\n", reverse_bits2(2));
}