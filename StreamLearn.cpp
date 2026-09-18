#include<string>
#include<iostream>
#include<sstream>
using namespace std;
void stringToIntegerTest(const string& str);

//将字符串转换成整型
void stringToIntegerTest(const string &str) 
{
	istringstream iss(str);
	int num;
	iss >> num;
	cout << num << endl;
	cout << typeid(num).name() << endl;
}
int main()
{
	// 创建输出字符串流
	ostringstream oss;
	// 往输出字符串中写入数据
	oss << "hello";
	//cout << oss.str() << endl;
	oss << " world";
	cout << oss.str() << endl;

	//如果输出字符串流中本来是有数据的话，它的写指针是指向开头的，
	//所以此时往里面添加数据是会覆盖原本的内容。
	//ostringstream oss1("hello");
	// 需要设置指针指向末尾，才能正常往后添加
	ostringstream oss1("hello",ios_base::ate);
	oss1 << "hi";
	cout << oss1.str() << endl;

	// 创建输入字符串流并且初始化数据
	istringstream iss("198 234 666 hello");
	int a, b,c;
	//从输入字符串流中读数据是按照空格切割的，每读完一个之后指针会到下一个数据上
	iss >> a;
	iss >> b;
	iss >> c;
	string str;
	iss >> str;
	cout << a << " " << b << " " << c << endl;
	//从输入字符串流中读取的数据它是会自动进行类型转换的
	cout << typeid(c).name() << " " << typeid(str).name() << endl;
	cout << "-----------------------------------" << endl;
	stringToIntegerTest("1234");
	return 0;
}