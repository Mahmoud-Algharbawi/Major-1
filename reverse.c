int reverse(unsigned int v)
{
	unsigned int retNum = 0;
	int startNum = 2;
	int endNum = 1 << 30;
	while (endNum != 0)
	{
		if ((v & startNum) > 0) 
		{
			retNum = retNum | endNum;
		}
		endNum >>= 1;
		startNum <<= 1;
	}
	return retNum;
}
