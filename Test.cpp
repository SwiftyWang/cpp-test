#include <iostream>
using namespace std;

void case8()
{
    int n;
    cout << "please input the number:" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < n - j - 1)
            {
                cout << " ";
            }
            else
            {
                cout << j + 1;
            }
        }
        cout << endl;
    }
}

void case10()
{
    int n, m;
    cout << "please input light count:" << endl;
    cin >> n;
    if (n < 0 || n > 5000)
    {
        throw invalid_argument("input number needs in (0,5000]");
    }
    cout << "please input people count:" << endl;
    cin >> m;
    if (m < 0 || m > n)
    {
        throw invalid_argument("people number needs in (0, n]");
    }
    bool lights[n];

    for (int i = 0; i < m; i++)
    {
        if (i == 0)
        {
            std::fill(lights, lights + n, false);
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if ((j + 1) % (i + 1) == 0)
                {
                    lights[j] = !lights[j];
                }
            }
        }
        for (int k = 0; k < n; k++)
        {
            cout << lights[k];
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        if (lights[i] == false)
        {
            cout << i + 1 << ",";
        }
    }
    cout << endl;
}

int main()
{
    case10();
    return 0;
}
