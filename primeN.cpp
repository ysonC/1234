#include <iostream>

using namespace std;

int main()
{
    int i, a;

    while (cin >> a)

    if (a == 2)
        {
            cout << "yes\n"; 
        }
    else if (a == 1 )
        {
            cout << "no\n";
        }
        
    else
    {
        for (i = 2; i <= a; i++ )
        {
            if ((a%i == 0) && a != i)
            {  
                cout << "no\n";
                break;
            }

            else if (i == a)
            {
                cout << "yes\n";
                break;
            }
            
            else if (a%i != 0)continue;
        }
    }
}