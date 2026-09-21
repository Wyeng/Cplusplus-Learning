#include<iostream>
#include<array>
#include<algorithm>

std::pair<int, double> FindMaxJoint(const std::array<double, 6>& q);

void PracticeCase9()
{
	std::array<double, 6> q ={ 0.2, -0.8, 1.5, -0.3, 0.5, 1.0 };
	auto [idx, joint] = FindMaxJoint(q);
	std::cout << "idx: " << idx << std::endl;
	std::cout << "angle: " << joint << std::endl;
}

std::pair<int, double> FindMaxJoint(const std::array <double, 6>& a)
{
	std::pair<int, double> tmp;
	auto it = std::max_element(a.begin(), a.end());
	tmp.first = std::distance(a.begin(),it);
	tmp.second = *it;
	return tmp;
}
