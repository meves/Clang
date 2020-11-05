long rfact(int n)
{
	long ans;
	if (n > 0)
		ans = n * rfact(n-1);
	else 
		return 1;
	return ans;
}