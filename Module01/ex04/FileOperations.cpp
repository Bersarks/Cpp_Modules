#include "FileOperations.hpp"

FileOperations::FileOperations(void)
{
	this->_filename = "";
	this->_s1 = "";
	this->_s2 = "";
}

FileOperations::FileOperations(std::string filename, std::string s1, std::string s2)
{
	this->_filename = filename;
	this->_s1 = s1;
	this->_s2 = s2;
}

FileOperations::~FileOperations(void)
{
}

int	FileOperations::catchError(std::ofstream &newFile, std::ifstream &readFile)
{
	if (!readFile.is_open())
	{
		std::cout << "Error: Cannot open file!" << std::endl;
		return (1);
	}
	if (!newFile.is_open())
	{
		std::cout << "Error: Cannot open *.replace file!" << std::endl;
		return (1);
	}
	return (0);
}

void	FileOperations::replace(void)
{
	std::string		replace_filename = this->_filename + ".replace";
	std::ofstream	newFile;
	std::ifstream	readFile(this->_filename.c_str());
	std::string		line;
	
	if (this->catchError(newFile, readFile))
		return ;
	newFile.open(replace_filename.c_str());
	while (std::getline(readFile, line))
	{
		for (int i = 0; i < (int)line.size(); i++)
		{ 
			if (i == (int)line.find(this->_s1, i))
			{
				newFile << this->_s2;
				std::cout << std::string(this->_s1).size() << std::endl;
				i += std::string(this->_s1).size() - 1;
			}
			else
				newFile << line[i];
		}
	}
	readFile.close();
	newFile.close();
}
// ofstream yeni bir dosya oluşturur. Eğer dosya varsa içeriğini siler.
// ifstream dosyayı okumak için kullanılır.
// find() fonksiyonu string içinde aranan stringi bulur ve bulduğu ilk stringin ilk karakterinin indexini döndürür.
