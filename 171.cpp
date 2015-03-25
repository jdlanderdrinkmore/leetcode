#include "leet_code.h"

int titleToNumber(string s)
{
	//char c;
	//char* p_s = s;
	int i = 0,re = 0;
	map<char,int> key;
	char c_1 = 'A';
	for(int j = 0; j < 26; j++)
	{
		key.insert(make_pair(c_1 + j,j + 1));
	}

	//cout<<key['A']<<key['B']<<endl;
	int l = s.size() - 1;
	while(s[i] != '\0')
	{	
		cout<<s[i]<<endl;

		re += key[s[i]] * pow(26,l--);
		i++;

	}
	return re;
}

int main(int argc, char const *argv[])
{
	string s = "AA";
	cout<<titleToNumber(s)<<endl;
	return 0;
}