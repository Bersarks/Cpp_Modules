#include "Contact.hpp"

Contact::Contact()
{
	this->index = 0;
}

Contact::~Contact()
{
}

int			Contact::getIndex(void)
{
	return (this->index);
}

std::string	Contact::getName(void)
{
	return (this->name);
}

std::string	Contact::getSurName(void)
{
	return (this->surName);
}

std::string	Contact::getNickName(void)
{
	return (this->nickName);
}

std::string	Contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return (this->darkestSecret);
}

void		Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

void		Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void		Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

void		Contact::setSurName(std::string surName)
{
	this->surName = surName;
}

void		Contact::setName(std::string name)
{
	this->name = name;
}

void		Contact::setIndex(int index)
{
	this->index = index;
}
