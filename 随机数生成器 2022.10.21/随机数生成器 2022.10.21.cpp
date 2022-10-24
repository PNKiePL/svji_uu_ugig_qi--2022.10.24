// random; - number generator
//https://blog.csdn.net/caroline_wendy/article/details/17322165

//svji_uu_ugig_qi- 2022.10.24
//随机数生成器- 2022.10.24
#include <iostream>
#include <vector>
#include <string>
#include <random>


using namespace std;

//一次一个 pushback
vector<unsigned> 随机生成(int 范围a, int 范围b)
{
	//使用默认种子创建随机数生成器
	static default_random_engine 随机数生成器; //静态 一个数		//
	static uniform_int_distribution<unsigned> 一个数的范围(范围a,范围b); //静态		均匀分布；一致分布
	vector<unsigned> ret; //一维一个数的范围
	for (size_t i = 0; i < 10; ++i) //10个
	{
		ret.push_back(
			一个数的范围(随机数生成器)
		);
	}
	return ret;
}

vector<int> 随机生成int(int 范围a, int 范围b)
{
	static default_random_engine 随机数生成器; //静态 一个数		
	static uniform_int_distribution<int> 一个数的范围(范围a, 范围b); //静态		均匀分布；一致分布
	vector<int> ret; //一维一个数的范围
	for (size_t i = 0; i < 10; ++i) //10个
	{
		ret.push_back(
			一个数的范围(随机数生成器)
		);
	}
	return ret;
}
//报错
auto 报错() {
//vector<float> 随机生成float(float 范围a, float 范围b)
//{
//	static default_random_engine 随机数生成器; //静态 一个数
//	static uniform_int_distribution<float> 一个数的范围(范围a, 范围b); //静态		均匀分布；一致分布
//	vector<float> ret; //一维一个数的范围
//	for (size_t i = 0; i < 10; ++i) //10个
//		ret.push_back(
//			一个数的范围(随机数生成器)
//		);
//	return ret;
//}
}
//==============================================================================================================

int main()
{
	//随机数生成器= 最大10位数
	default_random_engine 随机数生成器; //默认随机引擎 
	// 1
	cout << "engine : ";
	for (size_t i = 0; i < 10; ++i)
		cout << 随机数生成器() << " "; //8位数
	cout << endl;

	// 2
	cout << "uniform : "; //相同
	uniform_int_distribution<unsigned> u(0, 9); //即[0, 9]
	//cout
	for (size_t i = 0; i < 10; ++i)
		cout << u(随机数生成器) << " ";
	cout << endl;

	// 3
	cout << "min : " << 随机数生成器.min() << " max : " << 随机数生成器.max() << endl;
	vector<unsigned> v2(随机生成(111, 2222));
	vector<unsigned> v1(随机生成(1,20)); //vector .size

	// v1
	//cout
	for (size_t i = 0; i < v1.size(); ++i) //v1.size= 10
		cout << v1[i] << " ";
	cout << endl;

	// v2
	//cout
	for (size_t i = 0; i < v2.size(); ++i)
		cout << v2[i] << " ";
	cout << endl;
	//==============================================================================================================
	//qita
	cout << "int\n";
	vector<int> v随机生成int1(随机生成int(100, 200) );
	//vector<int> v随机生成int2(随机生成int(1, 2) );
	for (size_t i = 0; i < v1.size(); ++i) //v1.size= 10
		cout << v随机生成int1[i] << " ";
	//for (size_t i = 0; i < v1.size(); ++i) //v1.size= 10
	//	cout << v随机生成int2[i] << " ";
	cout << "\n";

	//==============================================================================================================
	// double
	uniform_real_distribution<double> ud(0, 1); //统一的真实分布

	cout << "float : ";
	for (size_t i = 0; i < 10; ++i) //cout 10个
		cout << ud(随机数生成器) << " ";
	cout << endl;

	// float
	uniform_real_distribution<float> wqerty(0, 1); //统一的真实分布

	cout << "float : ";
	for (size_t i = 0; i < 10; ++i) //cout 10个
		cout << wqerty(随机数生成器) << " ";
	cout << endl;

	return 0;
}

/*
engine: 3499211612 581869302 3890346734 3586334585 545404204 4161255391 3922919429 949333985 2715962298 1323567403
uniform : 5 5 0 6 9 0 9 4 7 6
min : 0 max : 4294967295
v1
2 2 4 5 4 1 9 5 8 3
v2
5 5 0 6 9 0 9 4 7 6
//==============================================================================================================
float : 0.725839 0.98111 0.109862 0.798106 0.297029 0.00478348 0.112465 0.639763 0.878431 0.503663
*/










