/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:46:16 by tabreia-          #+#    #+#             */
/*   Updated: 2023/09/06 18:46:16 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	check_word(std::string line, char *s1, int i)
{
	int k = 0;

	while (s1[k])
	{
		if (s1[k] != line[i])
			return (0);
		i++;
		k++;
	}
	return (1);
}
std::string	check_line(std::string line, char *s1, char *s2)
{
	std::string newLine;
	int i = 0;
	int k;

	while (line[i])
	{
		k = 0;
		if (line[i] == s1[0])
		{
			if (check_word(line, s1, i))
			{
				while (s2[k])
				{
					newLine[i] = s2[k];
					k++;
					i++;
				}
			}
		}
		newLine[i] = line[i];
		i++;
	}
	return (newLine);
}

int main(int argc, char **argv)
{
	std::string		newName;
	std::string		line;
	std::string		newLine;
	std::ifstream	originalFile;
	std::ofstream	dupFile;

	if (argc != 4)
	{
		std::cout << "Invalid usage: ./replace <filename> <s1> <s2>" << std::endl;
		return (0);
	}
	originalFile.open(argv[1]);
	if (originalFile.fail())
	{
		std::cout << "File doesn't exist" << std::endl;
		return (0);
	}

	dupFile.open((std::string(argv[1]) + ".replace").c_str());
	while(originalFile.is_open())
	{
		while(std::getline(originalFile, line))
		{
			newLine = check_line(line, argv[2], argv[3]);
			std::cout << newLine << std::endl;
			dupFile << newLine;
		}
		originalFile.close();
		dupFile.close();
	}
	return (0);
}