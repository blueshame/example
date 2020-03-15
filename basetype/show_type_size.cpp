#include <iostream>

template<class T> void ShowTypeSize()
{
	std::cout << typeid(T).name() << ":" << sizeof(T) << std::endl;
}

union ADDRESS {
	bool isValid : 1;
	int post : 4;
	int number : 2;
};

static void Run()
{
	ShowTypeSize<bool>();
	ShowTypeSize<char>();
	ShowTypeSize<unsigned char>();
	ShowTypeSize<short>();
	ShowTypeSize<unsigned short>();
	ShowTypeSize<int>();
	ShowTypeSize<unsigned int>();
	ShowTypeSize<long int>();
	ShowTypeSize<unsigned long int>();
	ShowTypeSize<long long int>();
	ShowTypeSize<unsigned long long int>();
	ShowTypeSize<float>();
	ShowTypeSize<double>();
	ShowTypeSize<long double>();
	ShowTypeSize<ADDRESS>();
	ADDRESS address;
	address.post = 5;
	std::cout << address.isValid  << std::endl;
	std::cout << address.post << std::endl;
	std::cout << address.number << std::endl;
}


int main()
{
    Run();
	return 0;
}

