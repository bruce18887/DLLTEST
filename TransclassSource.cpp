//
// Created by zlq on 2023/1/4.
//

#include "TransclassSource.h"
#include <bitset>
TransclassSource::TransclassSource() {

}
TransclassSource::~TransclassSource() {

}
std::string TransclassSource::HexToBin(const char &InputChar) {
    switch (InputChar) {
        default:
            std::cout<<"No such HexChar,please check the input char :"<<InputChar<<std::endl;
            std::cout<<"Return with ????"<<std::endl;
            rettempvalue = "????";
            break;
        case '0':rettempvalue = "0000";break;
        case '1':rettempvalue = "0001";break;
        case '2':rettempvalue = "0010";break;
        case '3':rettempvalue = "0011";break;
        case '4':rettempvalue = "0100";break;
        case '5':rettempvalue = "0101";break;
        case '6':rettempvalue = "0110";break;
        case '7':rettempvalue = "0111";break;
        case '8':rettempvalue = "1000";break;
        case '9':rettempvalue = "1001";break;
        case 'a':rettempvalue = "1010";break;
        case 'b':rettempvalue = "1011";break;
        case 'c':rettempvalue = "1100";break;
        case 'd':rettempvalue = "1101";break;
        case 'e':rettempvalue = "1110";break;
        case 'f':rettempvalue = "1111";break;
        case 'A':rettempvalue = "1010";break;
        case 'B':rettempvalue = "1011";break;
        case 'C':rettempvalue = "1100";break;
        case 'D':rettempvalue = "1101";break;
        case 'E':rettempvalue = "1110";break;
        case 'F':rettempvalue = "1111";break;
    }
    return rettempvalue;
}

std::string TransclassSource::DecToBin(const int &InputNum) {
    if (InputNum<0 || InputNum>15){
        std::cout<<"Transnum required >0 and <16  ";
        std::cout<<"ERROR num is :"<<InputNum<<" "<<std::endl;
        std::cout<<"Return with ????"<<std::endl;
        return "????";
    }
    std::bitset<4>rettempobj(InputNum);
    return rettempobj.to_string();
}