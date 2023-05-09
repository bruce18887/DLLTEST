//
// Created by zlq on 2023/1/4.
//

#ifndef DLLTEST_TRANSCLASSOBJ_H
#define DLLTEST_TRANSCLASSOBJ_H
#include "Transclass.h"

class DLL_API TransclassCreateObj{
public:
    static TransClass* CreateObj() ; //create pointer func
    static void DestoryObj(TransClass* InputObjPointer);//destory pointer mem
};

#endif //DLLTEST_TRANSCLASSOBJ_H
