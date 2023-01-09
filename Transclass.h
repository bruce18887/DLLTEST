//
// Created by zlq on 2023/1/4.
//

#ifndef DLLTEST_TRANSCLASS_H
#define DLLTEST_TRANSCLASS_H
#include <iostream>
class TransClass{

public:
    virtual std::string HexToBin(const char& InputChar) = 0;
    //使用HexToBin传入16进制字符返回2进制字符
    virtual std::string DecToBin(const int& InputNum) = 0;
    //使用DecToBin传入10进制数字返回2进制字符
};


#endif //DLLTEST_TRANSCLASS_H
