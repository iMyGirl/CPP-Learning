- [C++面向对象高级编程（侯捷）](#c面向对象高级编程侯捷)
  - [P1 C++编程简介](#p1-c编程简介)
    - [我们的目标](#我们的目标)
    - [你将获得的代码](#你将获得的代码)
    - [C++的历史](#c的历史)
    - [C++演化](#c演化)
    - [书籍](#书籍)
  - [P2 头文件与类的声明](#p2-头文件与类的声明)
    - [C vs C++ 关于数据和函数](#c-vs-c-关于数据和函数)
    - [Object Based (基于对象) vs. Object Oriented(面向对象)](#object-based-基于对象-vs-object-oriented面向对象)
    - [我们的第一个C++程序](#我们的第一个c程序)
    - [C++ program 代码基本形式](#c-program-代码基本形式)
    - [Output ， C++ vs. C](#output--c-vs-c)
    - [Header（头文件）中的防御式声明](#header头文件中的防御式声明)
    - [Header（头文件）的布局](#header头文件的布局)
    - [class declarations（类-声明）](#class-declarations类-声明)
    - [class template（模板）简介](#class-template模板简介)



# C++面向对象高级编程（侯捷）



[视频链接](https://www.youtube.com/playlist?list=PL-X74YXt4LVZ137kKM5dNfCIC4tsScerb)

[资料汇总](https://github.com/ZachL1/Bilibili-plus)

[PPT](https://github.com/ZachL1/Bilibili-plus/blob/master/C%2B%2B-OOPBase1-HouJie/slide/C%2B%2B%E9%9D%A2%E5%90%91%E5%AF%B9%E8%B1%A1%E9%AB%98%E7%BA%A7%E7%BC%96%E7%A8%8B(%E4%B8%8A)_%E8%AF%BE%E4%BB%B6.pdf)

## P1 C++编程简介

### 我们的目标

- 以良好的方式编写 C++ class （基于对象 Objective Based）
    - class without pointer members
    -- Complex
    - class with pointer members
    -- String
- 学习Classes之间的关系 （面向对象 Objective Oriented）
    -- 继承（inheritance）
    -- 复活（composition）
    -- 委托（delegation）

### 你将获得的代码

complex.h
complex-test.cpp

string.h
string-test.cpp

oop-demo.h
oop-tst.cpp

### C++的历史

- B语言（1969）
- C语言（1972）
- C++语言（1983）
（new C --> C with Class --> C++）

- Java 语言
- C# 语言

### C++演化

- C++ 98 （1.0）
- C++ 03 （TR1，Technical Report 1）
- C++ 11 （2.0）
- C++ 14

C++ 语言 & 标准库

### 书籍

- C++ Primer
- The C++ PROGRAMMING LANGUAGE

- Effective C++ Third Edition
- THE C++ STANDARD LIBRARY
- STL源码剖析

## P2 头文件与类的声明

### C vs C++ 关于数据和函数

图略

>C++ 将数据和函数封装在一起创建对象

图略

complex

实部与虚部 & 加减乘除 共轭 正弦 ...

```c
complex c1(2,1);
complex c2;
complex* pc = new complex(0,1);
```

string

字符（s）（其实是个ptr，指向一串字符） & 拷贝 输出 附加 插入 ...

```c
string s1("Hello ");
string s2("World ");
string* ps = new string;
```

### Object Based (基于对象) vs. Object Oriented(面向对象)

Object Based ： 面向的是单一class的设计
Object Oriented ：面对的是多重classes的设计，classes和classes之间的关系

### 我们的第一个C++程序

Classes 的两个经典分类：

- Class without pointer member(s)
**complex**
- Class with pointer member(s)
**string**

### C++ program 代码基本形式
.h(header files)头文件 .cpp .h(header files)标准库
```cpp
#include <iostream.h>
#include "complex.h"
```
头文件 + 主程序
延伸文件名（extension file name）不一定是.h或.cpp，也可能是.hpp或其他或甚至无延伸名。

### Output ， C++ vs. C
- C
#include <cstdio>
```c
#include <stdio.h>

int main()
{
    int i =7;
    printf("i=%d \n", i);
    
    return 0;
}
```
- C++
#include <iostream>
```cpp
#include <iostream.h>
using namespace std;

int main()
{
    int i = 7;
    cout << "i=" << i << endl;
    
    return 0;
}
```
### Header（头文件）中的防御式声明
`complex.h`
```cpp
#ifndef __COMPLEX__
#define __COMPLEX__
...
#endif
```
`complex-test.h`
```cpp
#include <iostream>
#include "comples.h"
using namespace std;

int main()
{
    complex c1(2,1);
    complex c2;
    cout << c1 << endl;
    cout << c2 << endl;
    
    c2 = c1 + 5;
    c2 = 7 + c1;
    c2 = c1 + c2;
    c2 += c1;
    c2 += 3;
    c2 = -c1;
    
    cout << (c1 == c2) << endl;
    cout << (c1 != c2) << endl;
    cout << conj(c1) << endl;
    return 0;
}
```
### Header（头文件）的布局
```cpp
#ifndef __COMPLEX__
#define __COMPLEX__
//0. forward declarations （前置声明）
#include <cmath>

class ostream;
class complex;

complex$
    __doapl (complex* ths, const complex& r);
//1. class declarations（类-声明）
class complex
{
    ...
};
//2. class declarations（类-定义）
complex::function ...
#endif
```
### class declarations（类-声明）
```cpp
class complex // class head

{            // class body
public：
    complex (double r = 0, double i = 0)
        : re (r), im (i)
    { }
    complex& operator += (const complex&);
    double real () const { return re; }
    double imag () const { return im; }

private:
    double re, im;
    
    friend complex& __doapl (complex*, const complex&);
};
```
有些函数在body直接定义，另一些在body之外定义
```cpp
{
    complex c1(2,1);
    complex c2;
    ..
}
```
### class template（模板）简介
```cpp
template<tyoename T>
class complex // class head

{            // class body
public：
    complex (double r = 0, double i = 0)
        : re (r), im (i)
    { }
    complex& operator += (const complex&);
    double real () const { return re; }
    double imag () const { return im; }

private:
    T re, im;
    
    friend complex& __doapl (complex*, const complex&);
};
```

```cpp
{
    complex<double> c1(2.5,1.5);
    complex<int> c2(2,6);
    ..
}
```

## P3 3 构造函数

### inline（内联）函数

```cpp
class complex 

{            
public：
    complex (double r = 0, double i = 0)
        : re (r), im (i)
    { } // inline
    complex& operator += (const complex&);
    double real () const { return re; }  // inline
    double imag () const { return im; }  // inline
    // 函数若在class内定义完成，成为inline候选人
    // 但最终是否是 inline function，由编译器决定

private:
    double re, im;
    
    friend complex& __doapl (complex*, const complex&);
};
```

```cpp
//2-2
inline double
imag(const complex& x)
{
    return x.imag();
}
// 不在本体中定义的 inline
```

### access level(访问级别)

```cpp
class complex 

{            
public：
    complex (double r = 0, double i = 0)
        : re (r), im (i)
    { } // inline
    complex& operator += (const complex&);
    double real () const { return re; } 
    double imag () const { return im; }  
    

private: // 一般存放 data，还有第三种 potective
    double re, im;
    
    friend complex& __doapl (complex*, const complex&);
};
```
使用
- 错误使用
```cpp
{
    complex c1(2,1);
    cout << c1.re;
    cout << c1.im;
}
```
- 正确使用
```cpp
{
    complex c1(2,1);  // 创建对象
    cout << c1.real();
    cout << c1.imag();
}
```

### constructor（ctor, 构造函数）

```cpp
class complex 

{            
public：
    complex (double r = 0, double i = 0) // 构造函数名相同，default argument（默认实参），没有返回值
        : re (r), im (i) // initialization list （初值列， 初始列）
    { re = r; im = i; } // assignments（赋值）
    complex& operator += (const complex&);
    double real () const { return re; } 
    double imag () const { return im; }  
    

private: 
    double re, im;
    
    friend complex& __doapl (complex*, const complex&);
};
```
```cpp
{
    complex c1(2,1);  
    complex c2;
    comlex* p = new complex(4);
}
```

### ctor（构造函数）可以有很多个 - overlording（重载）

```cpp
class complex 

{            
public：

    complex (double r = 0, double i = 0) // 1
        : re (r), im (i)
    { } 
    
    complex () : re(0), im(0) {} // 2 跟1冲突，不可以这样写
    
    complex& operator += (const complex&);
    double real () const { return re; } // 1
    double imag () const { return im; }  
    

private: 
    double re, im;
    
    friend complex& __doapl (complex*, const complex&);
};
```
```cpp
void real(double r) { re = r; } // 2
```
