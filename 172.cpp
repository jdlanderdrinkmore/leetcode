#include "leet_code.h"
long int fun(int i)
{
	long int re = 1;
	for(int j = 1; j <= i;j++)
		re *= j;
	return re;
}

int traling_zero(int n)
{
	int re = 0;
	int tem = 2;
	if(n / 5 < 5)
		return n / 5;
	int i = 1;
	while(!(n >= pow(5,i) && n < pow(5,i + 1)))
		i++;
	for(int j = 1; j <= i; j++)
	{
		re += n / pow(5,j);
	}
	return re;
}

int main(int argc, char const *argv[])
{
	//cout<<fun(20)<<endl;
	cout<<traling_zero(200)<<endl;
	return 0;
}