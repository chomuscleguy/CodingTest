#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int* arr = new int[2 * N];
    int front = 0;
    int rear = N;

    for (int i = 0; i < N; i++)
        arr[i] = i + 1;

    while (rear - front >= 2)
    {
        cout << arr[front++] << ' ';

        arr[rear++] = arr[front++];
    }

    if (rear - front == 1)
        cout << arr[front];

    delete[] arr;

    return 0;
}