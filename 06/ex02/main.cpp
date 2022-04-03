#include "B.hpp"
#include "A.hpp"
#include "C.hpp"

void identify_from_print(Base *b)
{
	Base *tmp;
	tmp = dynamic_cast<A*>(b);
	if (tmp)
		std::cout << "this is the A"<< std::endl;
	tmp = dynamic_cast<B*>(b);
	if (tmp)
		std::cout << "this is the B"<< std::endl;
	tmp = dynamic_cast<C*>(b);
	if (tmp)
		std::cout << "this is the C"<< std::endl;
}

void identify_from_ref(Base &b)
{
	Base tmp;
	try {
		tmp = dynamic_cast<A&>(b);
		std::cout << "this is the A"<< std::endl;
	} catch ( std::exception& e ) {}
	try {
		tmp = dynamic_cast<B&>(b);
		std::cout << "this is the B"<< std::endl;
	} catch ( std::exception& e ) {}
	try {
		tmp = dynamic_cast<C&>(b);
		std::cout << "this is the C"<< std::endl;
	} catch ( std::exception& e ) {}
}

int main( void )
{
	C	c;
	B	b;
	A	a;
	Base yop = a;
	std::cout << "===========PTR==========" << std::endl;
	identify_from_print(&a);
	std::cout << "===========REF==========" << std::endl;
	identify_from_ref(b);
	std::cout << "========================" << std::endl;
	std::cout << std::endl;
}
