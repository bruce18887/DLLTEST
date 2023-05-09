//
// Created by zlq on 2023/1/4.
//

#ifndef DLLTEST_TRANSCLASSSOURCE_H
#define DLLTEST_TRANSCLASSSOURCE_H

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
