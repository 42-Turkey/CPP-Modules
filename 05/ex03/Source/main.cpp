// Created by Onur Dursun on 12/27/22.

#include <AForm.hpp>
#include <Intern.hpp>

int main()
{
	Bureaucrat	chad("Chad", 5);
	Intern		asd;
	AForm		*forms[5];

	forms[0] = asd.makeForm("shrubbery creation", "document");
	forms[1] = asd.makeForm("robotomy request", "Marie");
	forms[2] = asd.makeForm("presidential pardon", "Marie");
	forms[3] = asd.makeForm("random request", "random");
	forms[4] = asd.makeForm("robotomomy request", "random");

	for (int i = 0; i < 5; ++i)
		if (forms[i])
		{
			std::cout << std::endl << *(forms[i]) << "   a    " << std::endl;
			chad.signForm(*(forms[i]));
			chad.executeForm(*(forms[i]));
		}

	for (int i = 0; i < 5; i++)
		delete forms[i];
	return (0);
}
