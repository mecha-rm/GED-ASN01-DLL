#pragma once

#include "PluginSettings.h"
#include <fstream>
#include <vector>

// file system class
// this clears out the entire file and rewrites it entirely if set to write.
class PLUGIN_API FileSystem
{
public:
	// constructor
	FileSystem();

	// destructor
	~FileSystem();

	// open the file for reading. If the file is currently open, it is closed.
	// if no file exists, 'false' is returned.
	bool OpenForReading(std::string filePath);

	// open the file for writing. If the file is currently open, it is closed.
	// if the file doesn't exist, or if the file cannot be opened, 'false' is returned.
	// if 'createFile' is set to 'true', an empty file is made at the provided location if it cannot be foun.
	bool OpenForWriting(std::string filePath, bool createFile);

	// returns 'true' if the file is currently open.
	bool FileOpen();

	// gets a line from the 
	// char[] GetLine(int index);

	// saves a line to be written to the file.
	// this does not actually write the line. Call WriteAllLines to write all lines to the files.
	void WriteLine(char line[], int SIZE);

	// saves a line to be written to the file.
	// this does not actually write the line. Call WriteAllLines to write all lines to the files.
	// this inserts the line at the provided index. 
	// If the index exceeds the vector size (i.e. it would leave empty spaces), it's placed at the end.
	// void WriteLine(char line[], int SIZE, int insert);


	// closes the file
	void CloseFile();

	// this may not work for DLLs, so try to see if there's a way to get around this.
	// gets a line from the file.
	// const char* GetLine(int i);


private:
	// file
	std::fstream file;

	// vector of lines for the file
	std::vector<char[]> lines;

protected:
};

