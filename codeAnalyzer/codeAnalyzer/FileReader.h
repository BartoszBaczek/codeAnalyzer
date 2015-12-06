#pragma once
#include <iostream>
#include <string>

using namespace std;
class FileReader
{
private:
	string fileContent;

public:
	FileReader(string fileName);
	~FileReader();
};

