#include <iostream>
using namespace std;

int main(){

        int a = 5;
		char b = 'A';
        char &c = b;
		void *x = &a;
		void *y = &b;
		void *z = &c;

		cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;

		cout << &a << " " << (void*)y << " " << (void*)z << " " << &x << " " << &y << " " << &z << endl;

		*(char*)y = 'F';
		cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;

		*(char*)z = 'W';
		cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;

		*(int*)x = 6;
		cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;

		*(int*)x = 7;
		cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;
		
	return 0;

}