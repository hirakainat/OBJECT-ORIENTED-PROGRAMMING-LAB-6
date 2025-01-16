#include<iostream>
using namespace std;
class rectangle {
public:
	int length;
	int width;
	rectangle() {
		 ptr1 = &length;
		 ptr2 = &width;
	}
	int* ptr1;
	int* ptr2;
};
int main() {
	rectangle r;
	cout << "enter the length" << endl;
	cin>>*(r.ptr1);
	cout << "the length is" << endl;
	cout << *(r.ptr1);
	cout << "enter the width" << endl;
	cin >> *(r.ptr2);
	cout << "the width is" << endl;
	cout << *(r.ptr2);
	rectangle rec, * rect; //pointer to object
	*(rect->ptr1) = 12;
	*(rect->ptr1) = 14;
	cout << "the length is" <<*(rect->ptr1)<< endl;
	cout << "the width is" << *(rect->ptr2) << endl;

	system("pause");
	return 0;
}