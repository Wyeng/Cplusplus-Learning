#include<iostream>
#include<vector>
#include<algorithm>

void PrintVec(const std::vector<double>& v);

void PracticeCase6()
{
	// 安全范围还是[-1.0, 1.0]
	std::vector<double> q = {0.2, -0.8, 1.5, -2.0, 0.5, 1.8};
	const double lower_limit = -1.0;
	const double upper_limit = 1.0;

	// task1:使用remove_if找到new_end
	auto new_end = std::remove_if(q.begin(), q.end(),
		[lower_limit, upper_limit](double angle)
		{
			return angle<lower_limit || angle>upper_limit;
		});

	// task2：打印size
	std::cout << q.size() << std::endl;
	std::cout << std::distance(q.begin(), new_end) << std::endl;

	PrintVec(q);
}