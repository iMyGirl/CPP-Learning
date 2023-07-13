# C++面向对象高级编程（侯捷）

[TOC]

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
