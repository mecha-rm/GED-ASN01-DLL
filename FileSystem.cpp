#include "FileSystem.h"

// constructor
FileSystem::FileSystem()
{
}

// destructor
FileSystem::~FileSystem()
{
    // closes file upon system termination if it's not closed already.
    file.close();
}

// opens a file for reading
bool FileSystem::OpenForReading(std::string filePath)
{
    // closes the file
    file.close();

    // opens the file for reading
    file.open(filePath, std::ios::in);

    // if the file is not open, then a 'false' is returned. 
    if (!file)
        return false;

    // returns 'true' since the file is now open.
    return true;
}


// opens a file for writing.
bool FileSystem::OpenForWriting(std::string filePath, bool createFile)
{
    // closes the file
    file.close();

    // opens the file for writing.
    file.open(filePath, std::ios::out);

    // if the file is not open, then a 'false' is returned. 
    if (!file)
        return false;

    // returns 'true' since the file is now open.
    return true;
}

// checks if the file is open.
bool FileSystem::FileOpen()
{
    return file.is_open();
}

// writes a line
void FileSystem::WriteLine(char line[], int SIZE)
{
    file.write(line, SIZE);
}

// save line
// void FileSystem::WriteLine(char line[], int SIZE, int insert)
// {
// 
// }

// closes the file.
void FileSystem::CloseFile()
{
    file.close();
}

// const char* FileSystem::GetLine(int i)
// {
//     std::string temp = "x";
// 
//     return temp.c_str();
// }
