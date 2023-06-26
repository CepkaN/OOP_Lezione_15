#include "Class.h"

//namespace { static int g = 9; } // без extern в заголовочнике
//static int g = 9;
int g = 9;
int MyClass::count{ 0 };

//void MyClass::Foo()
//{
//}
std::vector<int>MyClass::vectname;

__forceinline void MyClass::fo3()  // потерял inline можно жестко встроить
{
}

int MyClass::GetCount() {
	return count;
}
