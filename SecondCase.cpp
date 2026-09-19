#include<iostream>
#include<vector>
using namespace std;
void SecondCase()
{
	vector < vector<double>>trajectory = { {0.0, 0.1, 0.2}, { 0.1,0.2,0.3 },{0.2,0.3,0.4} };
	for (const auto& tra : trajectory)
	{
		for(const auto&position:tra)
		{
			cout<<position<<" ";
		}
		cout<<endl;
	}
}