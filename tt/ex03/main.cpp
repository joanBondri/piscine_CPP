#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	{
		std::cout << "========== BUREAUCRAT ==========" << std::endl;
		std::cout << " * Creation" << std::endl;
		Bureaucrat b("Bob", 100);

		std::cout << b << std::endl;

		std::cout << " * Too low grade" << std::endl;
		try {
			Bureaucrat bLow("Alice", 420);
		}
		catch (std::exception & e)
		{
			std::cout << e.what()<< std::endl;
		}

		std::cout << " * Too high" << std::endl;
		try { Bureaucrat bHigh("Peter", 0);
		}
		catch (std::exception & e)
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

	Bureaucrat high("high", 1);
	Bureaucrat low("low", 150);

	std::cout << "=============== SHRUBBERY ===============" << std::endl;
	{
		ShrubberyCreationForm f("lolol");

		// not signed
		low.executeForm(f);

		// sign it
		low.signForm(f);
		high.signForm(f);

		// not signed
		low.executeForm(f);
		high.executeForm(f);
	}

	std::cout << "=============== ROBOTOMY ===============" << std::endl;
	{
		RobotomyRequestForm f("lolol");

		// not signed
		low.executeForm(f);

		// sign it
		low.signForm(f);
		high.signForm(f);

		// not signed
		low.executeForm(f);
		high.executeForm(f);
	}

	std::cout << "=============== PARDON ===============" << std::endl;
	{
		PresidentialPardonForm f("lolol");

		// not signed
		low.executeForm(f);

		// sign it
		low.signForm(f);
		high.signForm(f);

		// not signed
		low.executeForm(f);
		high.executeForm(f);
	}
	std::cout << "=============== INTERN ===============" << std::endl;
	{
		Intern i;
		Form *a;
		// make and delete forms
	a = i.makeForm("shrubbery creation", "bob");
	std::cout << *a << std::endl;

		delete i.makeForm("shrubbery creation", "bob");
		delete i.makeForm("robotomy request", "bob");
		delete i.makeForm("presidential pardon", "bob");

		i.makeForm("unicorn riding", "bob");
	}
}
