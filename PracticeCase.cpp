#include<iostream>
#include<vector>
using namespace std;
void PracticeCase()
{
	vector<vector<double>>trajectory = { {0.1,0.2,0.3,0.4,0.5,0.6},{0.2,0.3,0.4,0.5,0.6,0.7},
	{ 0.3,0.4,0.5,0.6,0.7,0.8},{1.4,0.5,0.6,0.7,0.8,0.9},{0.5,0.6,0.7,0.8,0.9,1.0}};
	//输出每个waypoint的数量
	cout << "The number of waypoints in trajectory is: " << endl;
	cout << trajectory.size() << "  ";

	// 输出每个waypoint
	cout << endl << "The waypoints in each trajectory are: " << endl;
	for (const auto& tra : trajectory)
	{
		for(const auto& position : tra)
		{
			cout << position << " ";
		}
		cout << endl;
	}

	//计算每个waypoint的平均值
	cout<< "The average value of each waypoint in each trajectory is: " << endl;
	for (const auto& tra : trajectory)
	{
		double sum = 0.0;
		for (const auto& position : tra)
		{
			sum += position;
		}
		cout << sum / tra.size() << "  ";
	}

	//找出整个trajectory中最大的关节角
	double max_angle = trajectory[0][0];
	for (const auto& tra : trajectory)
	{
		for (const auto& position : tra)
		{
			if (max_angle < position)
			{
				max_angle = position;
			}
		}
	}
	cout << endl << "The maximum joint angle in the entire trajectory is: " << max_angle << endl;
}