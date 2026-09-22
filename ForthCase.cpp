#include<iostream>

void ForthCase()
{
	double angle = 0.8;

	// task1:定义一个 double 类型的引用，让它引用 angle。
	double& tmp = angle;
	tmp += 0.3;

	// task2:定义一个 double* 类型的指针，让它指向 angle。
	double* p = &angle;
	(*p) += 0.3;

	// task 3：验证
	std::cout << "angle:" << angle << std::endl;
	std::cout << "tmp:" << tmp << std::endl;
	std::cout << "*p:" << *p << std::endl;

	//task4：nullptr
	double* ptr = nullptr;
	if (ptr != nullptr)
		std::cout << *ptr << std::endl;
	else
		std::cout << "pointer is null" << std::endl;
	
}