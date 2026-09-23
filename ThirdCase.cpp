#include<iostream>

class Joint {
private:
	int id;
	double angle;
public:
	Joint(int id, double angle) :id(id), angle(angle)
	{
		std::cout << "Joint "<<this->id<<" constructed" << std::endl;
	}
	~Joint()
	{
		std::cout << "Joint " << this->id << " destroyed" << std::endl;
	}
};

void ThirdCase()
{
	{
		Joint Joint1(1, 2.0);
		Joint Joint2(2, 4.0);
	}
	std::cout << "end" << std::endl;
}