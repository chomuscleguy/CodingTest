#include <iostream>
using namespace std;

int paper[128][128];
int white = 0;
int blue = 0;

void divide(int x, int y, int size) 
{
    int color = paper[x][y];
    bool same = true;

    for (int i = x; i < x + size; i++) 
    {
        for (int j = y; j < y + size; j++) 
        {
            if (paper[i][j] != color)
            {
                same = false;
                break;
            }
        }
        if (!same) break;
    }

    if (same)
    {
        if (color == 0) white++;
        else blue++;
    } else
    {
        int half = size / 2;
        divide(x, y, half); 
        divide(x, y + half, half);   
        divide(x + half, y, half);
        divide(x + half, y + half, half);
    }
}

int main() 
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> paper[i][j];

    divide(0, 0, n);

    cout << white << '\n' << blue << '\n';

    return 0;
}
