#include "util.h"

#include <iostream>
#include <fstream>

static std::string read_file(const std::string& filePath)
{
	std::ifstream file(filePath);
    
	std::string output;
	std::string line;
    
	if(file.is_open())
	{
		while(file.good())
		{
			getline(file, line);
			output.append(line + '\n');
		}
	}
	else
	{
		std::cerr << "Error: Failed to load file in path: " << filePath << std::endl;
	}
    
	return output;
}