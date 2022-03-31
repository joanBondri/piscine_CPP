#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "========== BUREAUCRAT ==========" << std::endl;
	std::cout << " * Creation" << std::endl;
	Bureaucrat b("Bob", 42);
	std::cout << b << std::endl;

	std::cout << " * Too low grade" << std::endl;
	try {
		Bureaucrat bLow("Alice", 420);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << " * Too high" << std::endl;
	try { Bureaucrat bHigh("Peter", 0);
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

	std::cout << "========== FORM ==========" << std::endl;

	std::cout << " * Creation" << std::endl;
	Form f("Bob", 42, 42);
	std::cout << f << std::endl;

	std::cout << " * Too low grade" << std::endl;
	try {
		Form fLow("Alice", 420, 42);
	}
	catch ( std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}
	try {
		Form fLow("Alice", 42, 420);
	}
	catch ( std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << " * Too high" << std::endl;
	try {
		Form fHigh("Peter", 0, 42);
	}
	catch ( std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}
	try {
		Form fHigh("Peter", 42, 0);
	}
	catch ( std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "=============== SIGN ===============" << std::endl;
	{
		Bureaucrat signer("Signer", 16);
		Form form("Form", 10, 10);

		std::cout << signer << std::endl;
		std::cout << form << std::endl;

		try {
			form.beSigned(signer);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		form.beSigned(signer);
		std::cout << form << std::endl;
	}

	{
		Bureaucrat signer("Signer", 21);
		Form form("Form", 20, 20);

		signer.signForm(form);
		signer.signForm(form);
	}
}
