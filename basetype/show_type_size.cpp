#include <iostream>
#include <string>

template<class T> void ShowTypeSize()
{
    std::cout <<"type:"<< typeid(T).name() << ", size:" << sizeof(T) << std::endl;
}

union ADDRESS {
    bool isValid : 1;
    int post : 4;
    int number : 2;
};

static void TestUnion()
{
    std::cout << "union" << std::endl;
    ADDRESS address;
    address.post = 5;
    std::cout << address.isValid  << std::endl;
    std::cout << address.post << std::endl;
    std::cout << address.number << std::endl;
}

static void TestDefine()
{
    std::cout << "define variable" << std::endl;
    int i = 10;
    float f = .3F;
    double d = 5.0E-8F;
    long double ld1 = 5.0F;
    long double ld2 = 1.23E-9L;
    long l = 4L;
    unsigned long ul = 4UL;
    std::cout << ld1 << std::endl;
    std::cout << ld2 << std::endl;
}

static void TestString()
{
    std::string name1("");
    std::cout << "string:" << name1.length() << std::endl;
    std::cout << "string:" << name1.size() << std::endl;
    std::cout << "string:" << name1.capacity() << std::endl;

    std::string name2("11111111111");
    std::cout << "string:" << name2.length() << std::endl;
    std::cout << "string:" << name2.size() << std::endl;
    std::cout << "string:" << name2.capacity() << std::endl;

    for (int index = 0; index <= 64; index++) {
        std::string name(index, '=');
        std::cout << index << ", capacity:" << name.capacity() << ": " << name << std::endl;
    }
}

static void TestSize()
{
    std::cout << "show size" << std::endl;
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
    ShowTypeSize<std::string>();
}

static void Run()
{
    TestSize();
    TestUnion();
    TestDefine();
    TestString();
}


int main()
{
    Run();
    return 0;
}

