#include <iostream>
#include <string>
#include <cctype>

using namespace std;


char to_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 32;

	return c;
}

int main()
{
	string first;
	string second;
	int n;
	int i;
	cin >> first;
	cin >> second;
	n = first.length();


	for (char& c : first) {
		c = to_lowercase(c);
	}

	for (char& c : second) {
		c = to_lowercase(c);
	}
		for (i = 0; i < n; i++)
		{
			if (first[i] < second[i])
			{
				cout << "-1";
				break;
			}
			else if (first[i] > second[i])
			{
				cout << "1";
				break;
			}
			else if (first == second)
			{
				cout << "0";
				break;
			}
			else
				continue;
		}

		return 0;
}