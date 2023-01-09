//
// Created by zlq on 2023/1/4.
//

#ifndef DLLTEST_TRANSCLASSOBJ_H
#define DLLTEST_TRANSCLASSOBJ_H
#include "Transclass.h"
#ifdef DLL_API
#define DLL_API __declspec(export)
#else
#define DLL_API __declspec(import)
#endif
class DLL_API TransclassCreateObj{
public:
    TransClass* CreateObj() const; //create pointer func
    void DestoryObj(TransClass* InputObjPointer);//destory pointer mem
};

#endif //DLLTEST_TRANSCLASSOBJ_H
