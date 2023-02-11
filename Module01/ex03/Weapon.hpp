#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std::string	type;

	public:
		Weapon(std::string type);
		// İlk const getType() fonksiyonun geri dönüş değerinin değiştirilemez olduğunu belirtir.
		// İkinci const ise fonksiyonun içindeki this değişkeninin değiştirilemez olduğunu belirtir.
		// Üye fonksiyonlar için const kullanımı: https://www.geeksforgeeks.org/const-member-functions-c/
		const std::string&	getType() const;
		void				setType(std::string type);
};

#endif
