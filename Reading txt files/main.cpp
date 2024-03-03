#include <iostream>
#include <fstream>
#include <string>     // for std::getline
 
int main()
{
    std::string line;
 
    std::ifstream in("tester.txt"); // open file for reading
    if (in.is_open())
    {
        while (std::getline(in, line))
        {
            std::cout << line << std::endl;
        }
    }
    in.close();     // close file
}