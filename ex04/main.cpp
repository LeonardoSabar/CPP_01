/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 00:41:55 by leobarbo          #+#    #+#             */
/*   Updated: 2025/01/24 01:14:32 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replaceOccurrences(const std::string& line, const std::string& s1, const std::string& s2)
{
    std::string result;
    size_t pos = 0, found;

    while ((found = line.find(s1, pos)) != std::string::npos)
    {
        result += line.substr(pos, found - pos); 
        result += s2;
        pos = found + s1.length();
    }
    result += line.substr(pos);
    return result;
}

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return 1;
    }

    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open())
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }

    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename.c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Error: Could not create output file " << outputFilename << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        outputFile << replaceOccurrences(line, s1, s2) << std::endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}