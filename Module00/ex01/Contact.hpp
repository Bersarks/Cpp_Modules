#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	private:
		int			index;
		std::string name;
		std::string surName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		Contact();
		~Contact();
		int			getIndex(void);
		std::string	getName(void);
		std::string	getSurName(void);
		std::string	getNickName(void);
		std::string	getPhoneNumber(void);
		std::string	getDarkestSecret(void);
		void		setDarkestSecret(std::string darkestSecret);
		void		setPhoneNumber(std::string phoneNumber);
		void		setNickName(std::string nickName);
		void		setSurName(std::string surName);
		void		setName(std::string name);
		void		setIndex(int index);

};

#endif
