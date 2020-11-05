long fact(int n)
{
	long ans;
	for ( ans = 1; n > 1; n--)
		ans *= n;
	return ans;
}
