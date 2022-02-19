#include <iostream>
using namespace std;
auto fpsort(void* a[], size_t n, int (*fp)(void*, void*)) -> void;
auto compare(void* a, void* b) -> int;

int main() 
{
    int array[10];
    array[0] = 19;
    array[1] = 2;
    array[2] = 6;
    array[3] = 20;
    array[4] = 16;
    array[5] = 5;
    array[6] = 19;
    array[7] = 88;
    array[8] = 2;
    array[9] = 21;
    void* ptr[10];
    for (auto i = 0; i < 10; ++i)
        ptr[i] = &array[i];
    fpsort(ptr, 10, &compare);
    for (auto i = 0; i < 10; ++i)
        cout << *(int*)ptr[i] << endl;
}

auto fpsort(void* a[], size_t n, int (*fp)(void*, void*)) -> void 
{
    for (auto i = 0; i < n - 1; ++i) 
    {
        for (auto j = 0; j < n - i - 1; ++j) 
        {
            if (fp(a[j + 1], a[j]) == 1) 
            {
                int tmp = *(int*)a[j];
                *(int*)a[j] = *(int*)a[j + 1];
                *(int*)a[j + 1] = tmp;
            }
        }
    }
}

auto compare(void* a, void* b) -> int 
{
    if (*(int*)a < *(int*)b)
        return 1;
    return 0;
}