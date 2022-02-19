#include <iostream>

using namespace std;

auto fpprint(void* a[], size_t n, void(*fp)(void*)) -> void;
auto print_int(void*) -> void;
auto print_str(void*) -> void;

int main() 
{
    string arr_str[2];
    arr_str[0] = "hello";
    arr_str[1] = "africa";

    int arr_int[3];
    arr_int[0] = 21;
    arr_int[1] = 37;
   
    void* ptr_str[2];
    void* ptr_int[3];
    for (auto i = 0; i < 2; ++i)
        ptr_str[i] = &arr_str[i];
    for (auto i = 0; i < 2; ++i)
        ptr_int[i] = &arr_int[i];

    fpprint(ptr_str, 2, &print_str);
    fpprint(ptr_int, 2, &print_int);
}

auto fpprint(void* a[], size_t n, void(*fp)(void*)) -> void 
{
    for (auto i = 0; i < n; ++i) {
        fp(a[i]);
    }
}

auto print_int(void* p) -> void 
{
    cout << *(int*)p << endl;
}

auto print_str(void* p) -> void 
{
    cout << *(string*)p << endl;
}