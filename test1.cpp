#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>

int fact(int val)
{
	int ret = 1;
	while (val > 1)
		ret *= val--;   //��ret��val�ĳ˻�����ret,Ȼ��val��1
	return ret;
}

size_t count_calls()
{
	static size_t ctr = 0; //�ֲ���̬����
	return ++ctr;
}

int Swap(int a, int b)
{
	int* p1 = &a;
	int* p2 = &b;

	std::cout << "input: a = " << a << ", b = " << b << std::endl;
	return 0;

}
int main()
{
	/*std::string s3 = "hello" + ",";
	std::cout << s3 << std::endl;*/

	//practice 3.2-1: read every line from std::cin
	/*std::string s1;
	while (std::getline(std::cin, s1))
		std::cout << s1 << std::endl;*/

	//practice 3.2-2: ready one word every time
	/*std::string word;
	while (std::cin >> word)
		std::cout << word << std::endl;*/

	/*std::string str("some string");
	for (auto c : str)
		std::cout << c << std::endl;*/

	/*std::string s("hello world!!!!");
	decltype(s.size()) punct_cnt = 0;
	for (auto c : s)
		if (ispunct(c))
			++punct_cnt;
	std::cout << punct_cnt << " punctuation characters in " << s << std::endl;*/

	/*std::vector<int> v2;
	for (int i = 0; i != 100; ++i)
		v2.push_back(i);*/

	/*int j = fact(5);
	std::cout << "5! is " << j << std::endl;*/

	for (size_t i = 0; i != 10; ++i)
		std::cout << count_calls() << std::endl; //�ֲ���̬�����ĵ���

	system("pause");
	return 0;

}