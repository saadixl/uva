#include <iostream>

using namespace std;

int main(void)
{
    string str;

    while (getline(cin, str))
    {
        for (int i = 0; i < str.size(); i++)
        {
            cout << (char)(str[i] - 7);
        }

        cout << endl;
    }

return 0;
}
