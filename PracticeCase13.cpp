#include<iostream>
#include<set>
#include<algorithm>

void PracticeCase13()
{
	std::set<int> abnormal_joints;
	abnormal_joints.emplace(2);
	abnormal_joints.emplace(5);
	abnormal_joints.emplace(2);
	abnormal_joints.emplace(3);
	abnormal_joints.emplace(5);
	abnormal_joints.emplace(1);

	// task1:遍历 set，打印所有异常关节。
	for (const auto& tmp : abnormal_joints)
		std::cout << tmp << std::endl;

	// task2:判断3是否存在
	auto it = abnormal_joints.find(3);
	if (it != abnormal_joints.end())
		std::cout << "exist" << std::endl;
	else
		std::cout << "not exist" << std::endl;

	//task3: 判断4是否存在
	auto res = abnormal_joints.find(4);
	if (res != abnormal_joints.end())
		std::cout << "exist" << std::endl;
	else
		std::cout << "not exist" << std::endl;
}