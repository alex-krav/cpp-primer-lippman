#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_ex20()
{
	vector<string>::iterator iter;

	*iter++;
	//(*iter)++; // string++
	//*iter.empty(); // iter.empty()
	iter->empty();
	//++*iter; // ++string
	iter++->empty();

	return 0;
}