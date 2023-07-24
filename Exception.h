#pragma once
#include<stdexcept>

class FigException : public std::domain_error
{
public:
	FigException(const char* msg);
	~FigException();
	const char* what() const override;
	const char* message;
private:

};