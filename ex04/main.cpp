/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 13:24:03 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/06 13:54:37 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>

std::string	load_data(std::ifstream &inputFile)
	{
		inputFile.seekg(0 , std::ifstream::end);
		std::streamsize length=inputFile.tellg();
		inputFile.seekg(0, std::ifstream::beg);
		char *buffer = new char [length + 1];
		inputFile.read(buffer, length);
		buffer[length] = '\0';
		inputFile.close();
		std::string data = buffer;
		delete [] buffer;
		return (data);
	}


int main (int argc, char **argv)
{
	std::ifstream	inputFile;
	std::ofstream	outputFile;
	std::string		content;
	if (argc != 4)
	{
		std::cout << "Error: incorrect number of arguments" << std::endl;
		std::cout << "Usage: <target_file> <occurrence> <replacement>" << std::endl;
		return (1);
	}

	std::string		inputFileName(argv[1]);
	std::string		occurrence(argv[2]);
	std::string		replacement(argv[3]);
	if (inputFileName.size() == 0 || occurrence.size() == 0) {
		std::cout << "Error: enter meaningful input" << std::endl;
		return (1);
	}

	inputFile.open(inputFileName.c_str());
	if (inputFile.fail()) {
		std::cout << "Error opening input file: " << inputFileName << std::endl;
		return (1);
	}
	
	
	std::string 	outputFileName = inputFileName + ".replace";
	outputFile.open(outputFileName.c_str());
	if (outputFile.fail()) {
		std::cout << "Error opening input file: " << inputFileName << std::endl;
		return (1);
	}
	

	std::string tmp = load_data(inputFile);
	size_t	pos = 0;
	do	{
		pos = tmp.find(occurrence);
		if (pos != std::string::npos)
		{
			tmp.erase(pos, occurrence.length());
			tmp.insert(pos, replacement);
		}
	} while (pos != std::string::npos);
	outputFile << tmp;
	outputFile.close();

	return (0);
}

