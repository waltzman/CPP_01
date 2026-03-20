/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 14:55:02 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/20 17:31:29 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void replace(std::string occurrence, std::string replacement, std::string& content, std::ofstream& outfs)
{
	int pos;

	for (int i = 0; i < (int) content.size(); i++) {
		pos = content.find(occurrence, i);
		if (pos != -1 && pos == i) {
			outfs << replacement;
			i += occurrence.size() - 1;
		}
		else
			outfs << content[i];
	}
}

int main (int argc, char **argv)
{
	char			c;
	std::ifstream	inputFile;
	std::ofstream	outputFile;
	std::string		content;
	if (argc != 4)
	{
		std::cout  << "usage: replace <file> old new" << std::endl;
		return (1);
	}

	std::string		inputFileName(argv[1]);
	std::string		occurrence(argv[2]);
	std::string		replacement(argv[3]);
	
	
	if (inputFileName.size() == 0 ||
	       occurrence.size() == 0 ||
           replacement.size() == 0) {
		std::cout << "Error: incorrect input" << std::endl;
		return (1);
	}

	inputFile.open(inputFileName);
	if (inputFile.fail()) {
		std::cout << "Error opening file " << inputFileName << std::endl;
		return (1);
	}
	 
	std::string outputFileName = inputFileName.append(".replace");
	
	outputFile.open(outputFileName);
	if (outputFile.fail()) {
		std::cout << "Error opening file" << outputFileName << std::endl;
		return (1);
	}
	// READING INPUT FILE TO STRING;

	while(!inputFile.eof() && inputFile >> std::noskipws >> c)
		content += c;
	// std::cout << "content BEFORE:" << content;
	replace(occurrence, replacement, content, outputFile);
	inputFile.close();
	outputFile.close();
	return (0);
}
