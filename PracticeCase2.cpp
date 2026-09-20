#include<iostream>
#include<vector>
#include<algorithm>
void PrintVec(const std::vector<double>& v)
{
	for (const auto& tmp : v)
		std::cout << tmp << "  ";
	std::cout << std::endl;
}

void PracticeCase2()
{
	std::vector<double> v = {0.2, 1.8, 0.9, -0.5, 1.1, 2.0};
	double target = 1.0;

	// task1:按照关节角本身从小到大排序。
	std::sort(v.begin(), v.end());
	std::cout << "Sorted by angle:" << std::endl;;
	PrintVec(v);

	// task2：重新定义一个 q，按照abs(angle - target)从小到大排序
	std::vector<double> q = { 0.2, 1.8, 1.1, -0.5, 0.9, 2.0 };
	std::sort(q.begin(), q.end(),
		[target](double a, double b)
		{
			return std::abs(a - target) < std::abs(b - target);
		});
	std::cout << "Sorted by distance to target:" << std::endl;
	PrintVec(q);

	//task3：距离目标越近越优先；如果距离一样，则角度较小的排前面。
	std::sort(q.begin(), q.end(),
		[target](double a, double b)
		{
			if (std::abs(a - target) == std::abs(b - target))
			{
				return a < b;
			}
			else
				return std::abs(a - target) < std::abs(b - target);
		}
	);
	std::cout << "Sorted by distance to target and angle:" << std::endl;
	PrintVec(q);
}