#include <iostream>

#if 0
注释对/* */不能嵌套
/*
 * main函数
 * /* */
 * "hello"
 */
#endif

int main()
{
    std::cout << "/*";
    std::cout << "*/";
    //std::cout << /* "*/" */;
    std::cout << /* "*/" /* "/*" */;
    std::cout << std::endl;

    return 0;
}
