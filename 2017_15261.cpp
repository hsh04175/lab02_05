#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

void main() {
	auto num = 0;
	vector<int> numList;
	while (cin >> num) {
		numList.push_back(num);
	}

	for (int x = 0; x < numList.size(); x++)
	{
		for (auto a = 0; a < numList.size()-1; a++)
		{
			auto c = 0;
			if (numList[a] < numList[a + 1]) {
				c = numList[a];
				numList[a] = numList[a + 1];
				numList[a + 1] = c;
			}
		}
	}




	for (auto i: numList)
	{
		cout << i << " ";
	}

	system("PAUSE");


}