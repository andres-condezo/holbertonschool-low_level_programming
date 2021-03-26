
/**
 * flip_bits - Returns the number of bits you would need to
 * flip to get from one number to another..
 * @n: Number to be changed.
 * @m: Number to desidered.
 *
 * Return: number of bits you would need to flip .
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp = n ^ m;
	unsigned long int count = 0;

	while (temp != 0)
	{
		count++;
		temp &= (temp - 1);
	}

	return (count);
}
