#include<iostream>
#include<vector>
#include<algorithm>

# define M_PI 3.14

void PrintVec(const std::vector<double>& vec);
void PracticeCase3()
{
	std::vector<double> q = { 0.0, 0.5, 1.0, -0.5, 1.57 };

	// task1：使用 std::transform，把所有角度：rad → deg
	std::transform(q.begin(), q.end(), q.begin(),
		[](double angle)
		{
			return angle * 180.0 / M_PI;
		});
	PrintVec(q);

	// task2:计算每个angle的绝对值
	std::vector<double> q_1 = {0.2,-0.8,1.5,-2.0};
	std::transform(q_1.begin(), q_1.end(), q_1.begin(),
		[](double angle)
		{
			return std::abs(angle);
		});
	std::cout << "After taking absolute values: ";
	PrintVec(q_1);

	// task3: 计算每个angle与目标的误差
	double target = 1.0;
	std::vector<double> q_2 = {0.2,-0.8,1.5,-2.0};
	std::vector<double> p;
	p.resize(q_2.size());
	std::transform(q_2.begin(), q_2.end(), p.begin(),
		[target](double angle)
		{
			return angle - target;
		});
	std::cout << "After calculating errors: ";
	PrintVec(p);
}