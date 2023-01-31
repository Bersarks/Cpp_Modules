#ifndef FILEOPERATIONS_HPP
# define FILEOPERATIONS_HPP

#include <iostream>
#include <fstream>
#include <string>

class FileOperations
{
	private:
		std::string	_filename;
		std::string	_s1;
		std::string	_s2;
		int			catchError(std::ofstream &newFile, std::ifstream &readFile);

	public:
		FileOperations(void);
		FileOperations(std::string filename, std::string s1, std::string s2);
		~FileOperations(void);
		/**
		 * @brief Replaces all occurrences of s1 in the file with s2
		*/
		void	replace(void);
};


#endif
