#include<iostream>
using namespace std;
class rectangle {
public:
	
	int length;
	int width;
};
int main() {
	rectangle r,*rec;
	int rectangle::* ptr1 = &rectangle::length;
	int rectangle::* ptr2 = &rectangle::width;
	rec = &r;
	r.*ptr1 = 12;
	r.*ptr2 = 13;
	cout << "syntax1 to obtain length and width " << endl;
	cout << "length is" << r.*ptr1 << endl;
	cout << "width is" << r.*ptr2 << endl<<endl;
	cout << "syntax2 to obtain length and width " << endl;

	cout << "length is" << (*rec).length << endl;
	cout << "width is" << (*rec).width << endl<<endl;
	cout << "syntax3 to obtain length and width " << endl;

	cout<<"the length is "<< rec->length << endl;
	cout << "the width is " << rec->width << endl<<endl;
	cout << "syntax4 to obtain length and width " << endl;
	cout << "the length is" << rec->*ptr1 << endl;
	cout << "the width is" << rec->*ptr2 << endl << endl;
	cout << "syntax5 to obtain length and width " << endl;
	cout << "the length is" << (*rec).*ptr1 << endl;
	cout << "the width is" << (*rec).*ptr2 << endl<<endl;
	cout << "the syntax 6 is" << endl;
	rectangle& reference = r;  //reference to object
	reference.*ptr1 = 23;
	reference.*ptr2 = 24;
	cout << "length is" << reference.*ptr1 << endl;
	cout << "width is" << reference.*ptr2 << endl<<endl;
	cout << "the syntax 7 is" << endl;
	rectangle rect[1];   //array of objects
	rect[0].*ptr1 = 89;
	rect[0].*ptr2 = 90;

	cout << "length is" << rect[0].*ptr1 << endl;
	cout << "width is" << rect[0].*ptr2 << endl<<endl;
	rectangle* dynamic = new rectangle;
	cout << "the syntax 7 is" << endl;

	cout << "the length is" << dynamic->*ptr1 << endl;
	cout << "the width is" << dynamic->*ptr2 << endl<<endl;

	system("pause");
	return 0;
}