#include<iostream>
#include<map>
#include<algorithm>

void PracticeCase10()
{
	std::map<int, double> joint_angles;
	joint_angles[0] = 0.2;
	joint_angles[1] = 0.8;
	joint_angles[2] = 1.5;
	joint_angles[3] = -0.3;
	joint_angles[4] = 0.5;
	joint_angles[5] = 1.0;

	// task1：使用 range-for + structured binding，打印内容
	for (const auto [id, angle] : joint_angles)
	{
		std::cout << "joint " << id << ":" << angle << std::endl;
	}
	
	// task2:查询joint 2对应的angle的值,使用find查询时返回的是迭代器！
	std::cout << joint_angles.find(2)->second << std::endl;

	// task3：查询joint 10 如果不存在打印Joint 10  does not exist.
	auto it = joint_angles.find(10);
	if (it == joint_angles.end())
	{
		std::cout << "does not exist" << std::endl;
	}
	else
		std::cout << "found it" << std::endl;
}