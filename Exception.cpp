#include"Exception.h"

const char* FigException::what() const
{
	return message;
}

FigException::FigException(const char* msg) : std::domain_error(msg)
{
	this->message = msg;
}

FigException::~FigException()
{
}