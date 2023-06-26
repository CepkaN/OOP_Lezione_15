#pragma once
#include<vector>

// вводная по шаблонам
// шаблонами могут быть :
// классы
// функции
// переоперделение типов
// статический метод класса
// метод класса
//   исключения:
//       конструкторы классов шаблонами создавать нельзя
// реализация и определение шаблона всегда в одном файле

class MyClass {
private:
	int a = 0;
	int b{ 10 };
	static int count;       // работать не будет, нужна инициализация.
	static const int g_rgav{ 10 };  // а это будет.
	//static std::vector<int>vectname;
public:
	template<typename Type>
	void Foo(Type a);  // будет пытаться встроиться из-за определения

	void fo2(){}  // будет пытаться встроиться из-за места определения

	void fo3();    // потерял возможность встраиваться


	static int GetCount();
	/*static int GetCount() {
		return count;
	}*/
	static std::vector<int>vectname;
};
extern int g;                  // определение переменной.
//int MyClass::count{ 0 };

// 0
// service
// programm
// brs
// bss
// heap
// stack
// args

template<typename Type>
inline void MyClass::Foo(Type a)
{
}
