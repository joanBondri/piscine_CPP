#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << " * Creation" << std::endl;
	Bureaucrat b("Bob", 100);
	Bureaucrat c(b);
	Bureaucrat d("pop", 151);
	Bureaucrat e("f", 0);
	std::cout << b << std::endl;
	std::cout << "ici : " << c << std::endl;
	std::cout << " * Too low grade" << std::endl;
	try {
		Bureaucrat bLow("Alice", 420);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << " * Too high" << std::endl;
	try {
		Bureaucrat bHigh("Peter", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << " * Increment" << std::endl;
	try {
		while (true)
		{
			b.incrGrade();
			std::cout << b.getGrade() << ", ";
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << b << std::endl;

	std::cout << " * Decrement" << std::endl;
	try {
		while (true)
		{
			b.decrGrade();
			std::cout << b.getGrade() << ", ";
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << b << std::endl;
}
