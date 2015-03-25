#include "leet_code.h"
#include <cstring>
 	string convertToTitle(int n) {
        char* s;
        map<int,char> temp;
        char c = 'A';
        for(int i = 0; i < 26;i++)
        {
            temp.insert(make_pair(i + 1,c + i));
        }
        int i = 0;           //确定n的相对于26的阶数
        while(!(n >= pow(26,i) && n < pow(26,i+1)))
            i++;
        for(int j = i; j >= 0 ;j--)
        {
            strcat(s,&temp[n / pow(26,j)]);
            n = n % 26;
        }
        return s;
    }
int main(int argc, char const *argv[])
{
	cout<<convertToTitle(28)<<endl;
	return 0;
}