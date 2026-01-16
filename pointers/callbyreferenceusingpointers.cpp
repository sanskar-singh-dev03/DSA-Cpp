#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 89;
    int y = 45;
    int *p1 = &x;
    int *p2 = &y;

    swap(p1, p2);

    cout << x << " " << y << endl;
    return 0;
}