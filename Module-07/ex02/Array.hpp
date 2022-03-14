#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template< typename T >
class Array
{
private:

	T*				_array;
	unsigned int	_size;

public:
	Array() : _array(new T()), _size(0) {}

	Array( unsigned int n ): _array(new T[n]), _size(n) {}

	Array( Array const & src )
	{
		std::cout << "********** Copy constructor called **********" << std::endl;
		this->_array = new T[src._size];
		this->_size = src._size;
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = src._array[i];
		return;
	}

	~Array() { delete [] this->_array; }

	Array & operator=( Array const & rhs)
	{
		std::cout << "********** Assignment operator called **********" << std::endl;
		if (this->_array)
			delete [] this->_array;
		this->_array = new T[rhs._size];
		this->_size = rhs._size;
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = rhs._array[i];
		return *this;
	}	

	T & operator[]( unsigned int idx )
	{
		if (idx >= this->_size || idx < 0)
			throw IndexOutOfBoundsException();
		return this->_array[idx];
	}

	unsigned int size( void ) const { return this->_size; }

	T		getArray( unsigned int idx ) const{ return this->_array[idx]; }
	void	setArray( T x, unsigned int idx )
	{
		this->_array[idx] = x;
		return;
	}

	class IndexOutOfBoundsException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return "Index is out of bounds!";
		}
	};
};

#endif