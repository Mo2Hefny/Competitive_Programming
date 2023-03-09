#include <iostream>
#include <string>
std::string decToHexa(int n)
{
    n > 255 ? n = 255: n < 0 ? n = 0:0;
    char hexaDeciNum[2];
    int i = 0;
    while (n != 0) {
        int temp = 0;
        temp = n % 16;
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
        n = n / 16;
    }
    std::string hexCode = "";
    if (i == 2) {
        hexCode.push_back(hexaDeciNum[1]);
        hexCode.push_back(hexaDeciNum[0]);
    }
    else if (i == 1) {
        hexCode = "0";
        hexCode.push_back(hexaDeciNum[0]);
    }
    else if (i == 0)
        hexCode = "00";
    return hexCode;
} 

class RGBToHex
{
  public:
  static std::string rgb(int r, int g, int b){
    std::string hexCode = "";
    hexCode += decToHexa(r);
    hexCode += decToHexa(g);
    hexCode += decToHexa(b);
    return hexCode;
  }
};