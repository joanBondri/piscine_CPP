#include <iostream>
#include "main.hpp"

int		main(void)
{
	char	c1 = 'y';
	char	c2 = 'p';
	std::cout << "============CHAR============" << std::endl;
	std::cout << "swap :\n\tc1 = " << c1 << " , c2 = " << c2 << std::endl;
	::swap(c1, c2);
	std::cout << "\tnewValue :\n\tc1 = " << c1 << " , c2 = " << c2 << std::endl;
	::swap(c1, c2);
	std::cout << "min : " << ::min(c1, c2) << std::endl;
	std::cout << "max : " << ::max(c1, c2) << std::endl;
	std::cout << "============END=============" << std::endl << std::endl;
	int		i1 = -5000;
	int		i2 = 24;
	std::cout << "============INT=============" << std::endl;
	std::cout << "swap :\n\ti1 = " << i1 << " , i2 = " << i2 << std::endl;
	::swap(i1, i2);
	std::cout << "\tnewValue :\n\ti1 = " << i1 << " , i2 = " << i2 << std::endl;
	::swap(i1, i2);
	std::cout << "min : " << ::min(i1, i2) << std::endl;
	std::cout << "max : " << ::max(i1, i2) << std::endl;
	std::cout << "============END=============" << std::endl << std::endl;
	float		f1 = 0.4532f;
	float		f2 = 0.3212f;
	std::cout << "============FLOAT===========" << std::endl;
	std::cout << "swap :\n\tf1 = " << f1 << " , f2 = " << f2 << std::endl;
	::swap(f1, f2);
	std::cout << "\tnewValue :\n\tf1 = " << f1 << " , f2 = " << f2 << std::endl;
	::swap(f1, f2);
	std::cout << "min : " << ::min(f1, f2) << std::endl;
	std::cout << "max : " << ::max(f1, f2) << std::endl;
	std::cout << "============END=============" << std::endl << std::endl;
	double		d1 = -4444.31;
	double		d2 = -67.56321;
	std::cout << "===========DOUBLE===========" << std::endl;
	std::cout << "swap :\n\td1 = " << d1 << " , d2 = " << d2 << std::endl;
	::swap(d1, d2);
	std::cout << "\tnewValue :\n\td1 = " << d1 << " , d2 = " << d2 << std::endl;
	::swap(d1, d2);
	std::cout << "min : " << ::min(d1, d2) << std::endl;
	std::cout << "max : " << ::max(d1, d2) << std::endl;
	std::cout << "============END=============" << std::endl << std::endl;
	std::string		s1 = "yop";
	std::string		s2 = "Hello world";
	std::cout << "===========STRING===========" << std::endl;
	std::cout << "swap :\n\ts1 = " << s1 << " , s2 = " << s2 << std::endl;
	::swap(s1, s2);
	std::cout << "\tnewValue :\n\ts1 = " << s1 << " , s2 = " << s2 << std::endl;
	::swap(s1, s2);
	std::cout << "min : " << ::min(s1, s2) << std::endl;
	std::cout << "max : " << ::max(s1, s2) << std::endl;
	std::cout << "============END=============" << std::endl << std::endl;
}

template <class T>
void	swap(T& arg1, T& arg2)
{
	T	swap;
	swap = arg1;
	arg1 = arg2;
	arg2 = swap;
}

template <class T>
T		min(T arg1, T arg2)
{
	if (arg1 < arg2)
		return arg1;
	return arg2;
}

template <class T>
T		max(T arg1, T arg2)
{
	if (arg1 > arg2)
		return arg1;
	return arg2;
}
