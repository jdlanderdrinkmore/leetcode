#include "leet_code.h"

int majorElement(vector<int> &num)
{
        int size = num.size();
        map<int,int> ve;
        for(vector<int>::iterator ite = num.begin(); ite != num.end();ite++)
        {
            if(ve.count(*ite) == 1)
                ve[*ite]++;
            else
                ve[*ite] = 1;
        }
        for(map<int,int>::iterator ite = ve.begin(); ite != ve.end();ite++)
        {
        	cout<<ite->second<<" "<<ite->first<<endl;
            if(ite->second > (size / 2))
                return ite->first;
        }
    }
int main(int argc, char const *argv[])
{
	vector<int> ve(10,1);
	cout<<majorElement(ve)<<endl;
	return 0;
}