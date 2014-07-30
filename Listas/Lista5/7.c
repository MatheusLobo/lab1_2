float frac(float num, int *inteiro, float *frac)
{
	inteiro=num;
	frac=num-inteiro;
	for(int i=1; i<=n+1; i++)
		frac *= 10;
	frac+=5;
	frac =frac/10;
	for(int i=1; i<=n; i++)
		frac /= 10;
	return inteiro+frac;
}
