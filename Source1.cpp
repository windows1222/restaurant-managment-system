#include <iostream>
#include <fstream>

#include <string>

std::string getFileContents(std::ifstream&);            //Gets file contents

int main(int argc, char *argv[])
{

	std::ifstream Reader("File1.txt");             //Open file

	std::string Art = getFileContents(Reader);       //Get file

	std::cout << Art << std::endl;               //Print it to the screen

	Reader.close();                           //Close file

	return 0;
}