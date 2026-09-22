#include<iostream>
#include<map>
#include<algorithm>

void PrintMap(const std::map<int, double>& m)
{
	for (const auto& p : m)
	{
		std::cout << "joint_angle " << p.first << "  " << p.second << std::endl;
	}
}

void PracticeCase11()
{
	std::map<int, double>joint_angle;

	// task1:使用insert()方法插入数据
	joint_angle.insert({ 0,0.2 });
	joint_angle.insert({ 2,-0.8 });
	joint_angle.insert({ 1,1.5 });
	PrintMap(joint_angle);
	std::cout << "------------------------" << std::endl;
	joint_angle[2] = 3.0;	//会覆盖原来的数据
	PrintMap(joint_angle);
	std::cout << "------------------------" << std::endl;

	// task2:使用emplace来添加数据
	std::map<int, double> joint_angles;
	joint_angles.emplace(0, 0.2);
	joint_angles.emplace(1, -0.8);
	joint_angles.emplace(2, 1.5);
	PrintMap(joint_angles);
	std::cout << "------------------------" << std::endl;
	joint_angles.emplace(2, 3.0);
	PrintMap(joint_angles);

}