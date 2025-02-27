for(long long int i = 2;i <= 2000000 ;i++)
	{
		if(prime[i])
		{
			for(long long int j = 2*i; j<=2000000; j+=i)
			{
				prime[j]=false; 
			}
		}
	}