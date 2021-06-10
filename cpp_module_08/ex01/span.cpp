#include "span.hpp"
#include <math.h>

span::span(unsigned int const & N) : m_len(N)
{
};

span::span(const span& copy) : m_len(copy.m_len), m_my_vector(copy.m_my_vector)
{

}

span & span::operator=(const span& op)
{
	if (this == &op)
		return (*this);
	m_len = op.m_len;
	m_my_vector = op.m_my_vector;
	return (*this);
}

span::~span()
{
}

void        span::addNumber(int n)
{
	if (m_my_vector.size() < m_len)
		m_my_vector.push_back(n);
	else
		throw span::Data_Full();
}


int span::shortestSpan()
{
	if(m_my_vector.size() < 2)
		throw span::Blank_vector();
    int a;

    std::vector<int>::iterator max1;
    std::vector<int>::iterator max2;
    a = abs(m_my_vector[0] - m_my_vector[1]);
    for (int i = 1; i < m_my_vector.size() - 1; i++)
        if (a > abs(m_my_vector[i] - m_my_vector[i+1]))
            a = abs(m_my_vector[i] - m_my_vector[i+1]);
	return (a );
}

int span::longestSpan(void)
{
	if(m_my_vector.size() < 2)
		throw span::Blank_vector();
	
	std::vector<int>::iterator min;
	std::vector<int>::iterator max;

	min = std::min_element(m_my_vector.begin(), m_my_vector.end());
	max = std::max_element(m_my_vector.begin(), m_my_vector.end());
	return abs(*max - *min);
}