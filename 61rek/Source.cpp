#include <iostream> 
#include <time.h>
#include <iomanip>
using namespace std;


void Create(int* r, const int size, const int Low, const int High, int i)
{
    r[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(r, size, Low, High, i + 1);
}
void Print(int* r, const int size, int i)
{
    cout << setw(4) << r[i];
    if (i < size - 1)
        Print(r, size, i + 1);
    else
        cout << endl;
}
int Sum(int* r, const int size, int i) {
    if (i < size) {
        if (!(r[i] % 2 == 0 || i % 13 == 0)) {
            int el = r[i];
            r[i] = 0;
            return el + Sum(r, size, i + 1);
        }
        else
            return Sum(r, size, i + 1);
    }
    return 0;
}

int Count(int* r, const int size, int i) {
    if (i < size) {
        if (!(r[i] % 2 == 0 || r[i] % 13 == 0)) {
            return 1 + Count(r, size, i + 1);
        }
        else
            return Count(r, size, i + 1);
    }
    return 0;
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 23;
    int r[n];
    int Low = 4;
    int High = 68;

    Create(r, n, Low, High, 0);
    Print(r, n, 0);
    cout << "Sum: " << Sum(r, n, 0) << ", Count: " << Count(r, n, 0) << endl;
    Print(r, n, 0);

    return 0;
}