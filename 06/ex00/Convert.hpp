#include <iostream>

class Convert
{
	private :
		char			_charVar;
		int				_intVar;
		float			_floatVar;
		double			_doubleVar;
		std::string		_type;
		std::string		_input;
		std::string		_special;
	public :
		const static std::runtime_error	Impossible;
		const static std::runtime_error NonDisplayable;
		Convert( void );
		Convert( std::string _type );
		~Convert( void );
		Convert& operator=(Convert& co);
		void findType( void );
		void print( void );
		void printChar( void );
		void printInt( void );
		void printFloat( void );
		void printDouble( void );
};
