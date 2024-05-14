#include <iostream>

using namespace std;

int main()
{
    int opc = 10;

    for (int i = opc; i >= 1; --i)
    {

        for (int j = 1; j <= i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
}