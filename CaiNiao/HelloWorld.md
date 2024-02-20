### HelloWorld

HelloWorld.cpp

```cpp
#include <iostream>
using namespace std;

int main()
{
        cout << "Hello World";
        return 0;
}
```

HelloWorld_practice.cpp

```cpp
#include <iostream>


int main(){
        std::cout << "Hello World";
        return 0;
}
```



#### 标识符

一个标识符以字母 A-Z 或 a-z 或下划线 _ 开始，后跟零个或多个字母、下划线和数字（0-9）

**区分大小写**

#### C++关键字

[C++ 的关键字（保留字）完整介绍 | 菜鸟教程 (runoob.com)](https://www.runoob.com/w3cnote/cpp-keyword-intro.html)

### C++ 数据类型

- 基本的内置类型

| 类型   | 关键字     |
| ---- | ------- |
| 布尔型  | bool    |
| 字符型  | char    |
| 整型   | int     |
| 浮点型  | float   |
| 双浮点型 | double  |
| 无类型  | void    |
| 宽字符型 | wchar_t |

下表显示了各种变量类型在内存中存储值时需要占用的内存，以及该类型的变量所能存储的最大值和最小值

| 类型                 | 位         | 范围                                                                                |
| ------------------ | --------- | --------------------------------------------------------------------------------- |
| char               | 1 个字节     | -128 到 127 或者 0 到 255                                                             |
| unsigned char      | 1 个字节     | 0 到 255                                                                           |
| signed char        | 1 个字节     | -128 到 127                                                                        |
| int                | 4 个字节     | -2147483648 到 2147483647                                                          |
| unsigned int       | 4 个字节     | 0 到 4294967295                                                                    |
| signed int         | 4 个字节     | -2147483648 到 2147483647                                                          |
| short int          | 2 个字节     | -32768 到 32767                                                                    |
| unsigned short int | 2 个字节     | 0 到 65,535                                                                        |
| signed short int   | 2 个字节     | -32768 到 32767                                                                    |
| long int           | 8 个字节     | -9,223,372,036,854,775,808 到 9,223,372,036,854,775,807                            |
| signed long int    | 8 个字节     | -9,223,372,036,854,775,808 到 9,223,372,036,854,775,807                            |
| unsigned long int  | 8 个字节     | 0 到 18,446,744,073,709,551,615                                                    |
| float              | 4 个字节     | 精度型占4个字节（32位）内存空间，+/- 3.4e +/- 38 (~7 个数字)                                        |
| double             | 8 个字节     | 双精度型占8 个字节（64位）内存空间，+/- 1.7e +/- 308 (~15 个数字)                                    |
| long long          | 8 个字节     | 双精度型占8 个字节（64位）内存空间，表示 -9,223,372,036,854,775,807 到 9,223,372,036,854,775,807 的范围 |
| long double        | 16 个字节    | 长双精度型 16 个字节（128位）内存空间，可提供18-19位有效数字。                                             |
| wchar_t            | 2 或 4 个字节 | 1 个宽字符                                                                            |

datatype.cpp

```cpp
#include<iostream>  
#include <limits>
 
using namespace std;  
  
int main()  
{  
    cout << "type: \t\t" << "************size**************"<< endl;  
    cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);  
    cout << "\t最大值：" << (numeric_limits<bool>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;  
    cout << "char: \t\t" << "所占字节数：" << sizeof(char);  
    cout << "\t最大值：" << (numeric_limits<char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;  
    cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);  
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;  
    cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);  
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;  
    cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);  
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;  
    cout << "short: \t\t" << "所占字节数：" << sizeof(short);  
    cout << "\t最大值：" << (numeric_limits<short>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;  
    cout << "int: \t\t" << "所占字节数：" << sizeof(int);  
    cout << "\t最大值：" << (numeric_limits<int>::max)();  
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;  
    cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);  
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();  
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;  
    cout << "long: \t\t" << "所占字节数：" << sizeof(long);  
    cout << "\t最大值：" << (numeric_limits<long>::max)();  
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;  
    cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);  
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();  
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;  
    cout << "double: \t" << "所占字节数：" << sizeof(double);  
    cout << "\t最大值：" << (numeric_limits<double>::max)();  
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;  
    cout << "long double: \t" << "所占字节数：" << sizeof(long double);  
    cout << "\t最大值：" << (numeric_limits<long double>::max)();  
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;  
    cout << "float: \t\t" << "所占字节数：" << sizeof(float);  
    cout << "\t最大值：" << (numeric_limits<float>::max)();  
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;  
    cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);  
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();  
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;  
    cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;  
    // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;  
    cout << "type: \t\t" << "************size**************"<< endl;  
    return 0;  
}
```

P.S. >将 `endl` 替换为 `'\n'` 会产生不同的效果。`endl` 是 C++ 标准库中的换行符，并且会刷新输出缓冲区，而 `'\n'` 只是简单地表示换行符，不会刷新输出缓冲区。在一般情况下，它们都可以用来实现换行的效果，但是 `endl` 的功能更加强大一些。

使用 `'\n'` 替换 `endl` 后，输出会更快地显示在控制台上，因为它不会刷新输出缓冲区，但是在某些情况下可能会导致输出不及时，例如在需要立即看到输出结果时。所以，如果你不需要强制刷新输出缓冲区，使用 `'\n'` 是一个更好的选择。

#### typedef 声明

```cpp
typedef int feet;
feet distance;
```
