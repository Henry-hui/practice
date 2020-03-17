#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char c;
	while ((c = getchar()) != '\n')
	{
		if ((c >= 'a'&&c <= 'z') || ((c >= 'A'&&c <= 'Z')))
		{
			if (c >= 'E'&&c <= 'Z' || c >= 'e'&&c <= 'z') c = c - 4;
			else c = c + 26;
		}
		cout << c;
	}
	cout << endl;
		return 0;
}
