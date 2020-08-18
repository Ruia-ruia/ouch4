#include <iostream>
using namespace std;


class A {
public:
	A() :ptr(nullptr) {};
	A(A* ptr) :ptr(ptr) {};
	A(int* ptr) :int_ptr(ptr) {};
	
	A* ptr;
	int* int_ptr; 

};

int main() {

	int *c = new int(3);
	
	A *z = new A;
	A *a = new A(c);
	A *b = new A(a);
	A *w = new A(b);

	delete a;

  	cout << b->ptr << endl;
	
	return 0;
}
