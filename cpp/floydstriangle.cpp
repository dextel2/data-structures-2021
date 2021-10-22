
#include <iostream>
using namespace std;
main()
{
    int a, k = 1;
    cout << "Enter Height \n" cin >> a;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  " << k;
            k++;
        }
        cout << endl;
    }

    return 0;
}
