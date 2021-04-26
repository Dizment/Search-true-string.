#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    const int length = 3;
    string mas[length] = { "str3", "1smth", "bla2bla" };

    for (int i = 0; i < length; i++)
    {
        vector<char> digit;

        for (int j = 0; j < mas[i].size(); j++)
        {
            if (isdigit(mas[i][j]))
            {
                digit.push_back(mas[i][j]);
            }
        }

        int intDigit = 0;

        for (int j = 0; j < digit.size(); j++)
        {
            intDigit = intDigit + ((int)digit[j] - '0') * pow(10, digit.size() - 1 - j);
        }

        string temp = mas[intDigit - 1];
        mas[intDigit - 1] = mas[i];
        mas[i] = temp;
    }

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < mas[i].size(); j++)
        {
            if (isdigit(mas[i][j]))
            {
                mas[i] = "";
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        cout << mas[i] << " ";
    }
}
