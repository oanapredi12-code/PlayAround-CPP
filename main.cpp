//pune pe GITHUB


#include <iostream>
#include <string>
using namespace std;

int main()
{

	string p = "myName";
	string subToFind = "Name";
	int index=p.find(subToFind, 0);
	string substr = p.substr(index, subToFind.length());
	cout << substr<<"\n";

	char k = 'a';
	int no = 10;
	float floatNo = 3.4;
	bool isEmpty;

	//floseste variabilele in multiple lines;

	p[index] = 'F';

	cout << p.substr(0, index) << " name is" << substr << "\n";
	cout << p.substr(0, index) << " favorite number is: " << floatNo << "\n";
	index = p.find("l", 0);
	cout << "My current found index is: \n" << index;

	floatNo = 3.14;

	p[p.length() - 1] = k;

	cout << "My favorite pie is: " << floatNo 
	<< " and I'll cut it in " << no << " slices\n";

	cout << "my current string is: " << p << "\n";
	cout << "\t\t\t\t\t--------Blank Sheet--------" << "\n\n\n\n";
	cout << "I'm eating another pie" << "\n";

	p = "";
	isEmpty = p.length();
	//cout << "isEmpty=" << isEmpty << endl;
	cout << "my pie has either >=1 or 0 slices. This one has " << float(int(isEmpty)) / (p.length()+1) <<" slice value";
}
