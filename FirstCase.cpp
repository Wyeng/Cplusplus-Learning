#include <vector>
#include<iostream>
using namespace std;
void FirstCase()
{
	// 初始的单关节轨迹
	vector<double>trajectory = {0.0,0.2,0.4,0.6,0.8};
	// 每个轨迹点增加一个偏移量
	const double offset = 0.1;
	for (auto& position : trajectory)
	{
		position += offset;
	}
	cout << "Modified trajectory: ";
	for (const auto& position : trajectory)
	{
		cout << position << " ";
	}
}
