include <iostream>

using namespace std;

int main (){
    cout<<"fahrenheit:";
    int fahrenheit;
    cin>> fahrenheit;
    double celcius = (fahrenheit-32)/1.8;
    cout << celcius;
    return 0;
}