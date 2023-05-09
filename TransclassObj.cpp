//
// Created by zlq on 2023/1/4.
//

#include "TransclassObj.h"
#include "TransclassSource.h"

TransClass *TransclassCreateObj::CreateObj() {
    return new TransclassSource;
}
void TransclassCreateObj::DestoryObj(TransClass* InputObjPointer) {
    delete InputObjPointer;
}