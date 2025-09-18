#include <iostream>

using namespace std;

void bugFix(char line[])
{
    bool isFix ;
    do 
    {
        isFix = false;
        char* read = line;
        char* write = line;

        while (*read) 
        {
            if (read[0] == 'B' && read[1] == 'U' && read[2] == 'G') 
            {
                read += 3;
                isFix = true;
            }
            else 
            {
                *write = *read;
                write++;
                read++;
            }
        }
        *write = '\0';
    } 
    while (isFix);
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char line[101];

    while (cin.getline(line, sizeof(line))) 
    {
        bugFix(line);
        cout << line << '\n';
    }

    return 0;
}