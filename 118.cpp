#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int> > generator(int numRows)
{
	    vector<vector<int> > re;
        for(int i = 0;i < numRows;i++)
        {
        	vector<int> tem;
            for(int j = 0;j <= i;j++)
            {
                if(i <= 1 || j == 0 || j == i)
                    tem.push_back(1);
                else
                    tem.push_back(re[i-1][j]+re[i-1][j-1]);
            }
            re.push_back(tem);
        }
        return re;
}
int main(int argc, char const *argv[])
{
	vector<vector<int> > re;
	re = generator(10);
	//cout<<re[2][2]<<endl;
	for(vector<vector<int> >::iterator ite = re.begin(); ite != re.end(); ite++)
	{
		for(vector<int>::iterator ite1 = ite->begin();ite1 != ite->end(); ite1++)
			cout<<*ite1<<" ";
		cout<<endl;
	}
	cout<<endl;
	return 0;
}