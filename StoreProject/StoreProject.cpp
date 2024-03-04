#include <iostream>
#include <string>
#include "BestBuy.h"
using namespace std;

int main()
{
    string name;
    double Sales;
    int NofMonths;
    cout << "Best buy sales app\n";
    cout << "==================\n\n";
    cout << "Enter store name ==> ";
    getline(cin, name);
    //create an instant of store
    BestBuy s1(name);
    cout << "how many months do you want to evaluate ==> ";
    cin >> NofMonths;
    for (int m = 1; m<=NofMonths; m++)
    {
        cout << "enter sale month# " << m << " ===> ";
        cin >> Sales;
        s1.CalcAcum(Sales);
    }
    cout << " The average sales ==> " << s1.getAcumSales() / NofMonths << endl;
}
