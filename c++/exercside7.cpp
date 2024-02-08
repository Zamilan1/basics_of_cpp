#include <iostream>

using namespace std;

int main()
{
    double sales = 95000;
    cout << "sales: $" << sales << endl;

    const double stateTaxRate = .04;
    double statetax = sales * .04;
    cout << "statetax:$" << statetax << endl;

    const double countyTaxRate = .02;
    double countyTax = sales * countyTaxRate;
    cout << "countyTax:$ " << countyTax << endl;

    double Totaltax = statetax + countyTax;
    cout << "Totaltax:$" << Totaltax;
    return 0;
}