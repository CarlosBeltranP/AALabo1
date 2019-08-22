#include <iostream>
using namespace std;


int pot(int base, int expo)
{
    if (expo != 0)
        return (base * pot(base, expo - 1));
    else
        return 1;
}


int main()
{
	cout<<"\tEjercicio #2\n";
    int base, expo, res;
    cout << "\nBase: ";
    cin >> base;
    cout << "\nExponente: ";
    cin >> expo;
    res = pot(base, expo);
    cout << "\nEl resultado de " << base << "^" << expo << " es " << res;
    return 0;
}
