//
// Created by zlq on 2023/1/4.
//
#include "Transclass.h"
#include "TransclassObj.h"
#include <iostream>

using namespace std;
int main()
{
    auto funpointer = TransclassCreateObj::CreateObj();
    string mytest;
    int enternum;
    cout<<"Please enter a transnum: "<<endl;
    cin>>enternum;
    mytest = funpointer->DecToBin(enternum);
    cout<<mytest<<endl;
    char enterchar;
    cout<<"Please enter a transchar: "<<endl;
    cin>>enterchar;
    mytest = funpointer->HexToBin(enterchar);
    cout<<mytest<<endl;
    TransclassCreateObj::DestoryObj(funpointer);
    std::system("pause");
    return 0;
}