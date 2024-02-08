#include <iostream>
using namespace std;
int main()
{
    double sales = 95000;
    std << " Sales:$" << sales << endl;
    const sttTaxRate = .04;
    double stt = sales * 0.04;
    std << " stt:$" << stt << endl;
    const countytax = .02;
    double stt = sales * 0.02;
    std << " countytax:$" << countytax << endl;
    return 0;
}