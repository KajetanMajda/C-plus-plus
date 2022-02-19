#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
enum PERMISSION
{
	NO_PERMS,
	PERM_READ,
	PERM_WRITE,
	PERM_READANDWRITE,
	PERM_EXECUTE,
	PERM_READANDEXECUTE,
	PERM_WRITEANDEXECUTE,
	ALL_PERMS
};

int main()
{
	srand(time(NULL));

	int users[10];
	for (int i = 0; i < 10; i++)
	{
		users[i] = (std::rand() % 8);

		int perm = users[i];
		cout << "user " << i + 1 << ": ";
		switch (perm)
		{
		case NO_PERMS:
		{
			cout << "have no permissions \n";
			break;
		}
		case PERM_READ:
		{
			cout << "can read \n";
			break;
		}
		case PERM_WRITE:
		{
			cout << "can write \n";
			break;
		}
		case PERM_READANDWRITE:
		{
			cout << "can read and write \n";
			break;
		}
		case PERM_EXECUTE:
		{
			cout << "can execute \n";
			break;
		}
		case PERM_READANDEXECUTE:
		{
			cout << "can read and execute \n";
			break;
		}
		case PERM_WRITEANDEXECUTE:
		{
			cout << "can write and execute \n";
			break;
		}
		case ALL_PERMS:
		{
			cout << "have all perms \n";
			break;
		}
		}
	}

	return 0;
}
