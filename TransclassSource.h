//
// Created by zlq on 2023/1/4.
//

#ifndef DLLTEST_TRANSCLASSSOURCE_H
#define DLLTEST_TRANSCLASSSOURCE_H

#ifdef DLL_API
#define DLL_API __declspec(export)
#else
#define DLL_API __declspec(import)
#endif

#include "Transclass.h"

class DLL_API TransclassSource:public TransClass{
private:
    std::string rettempvalue;
public:
    TransclassSource();
    ~TransclassSource();
    std::string HexToBin(const char& InputChar);
    std::string DecToBin(const int& InputNum);
};

#endif //DLLTEST_TRANSCLASSSOURCE_H
