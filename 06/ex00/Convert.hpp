#pragma once
#include <ostream>

class Convert 
{
	private :
		std::string _input;
	public :
		static	std::runtime_error	Impossible;
		static	std::runtime_error	NonDisplayable;
		Convert(void);
		Convert( Convert& co );
		Convert(std::string input);
		virtual ~Convert(void);
		Convert& operator=(Convert& co);
		void	display( std::ostream& of );
		char	toChar(void);
		int		toInt(void);
		float	toFloat(void);
		double	toDouble(void);
};

std::ostream&	operator<<(std::ostream &of, Convert co);
