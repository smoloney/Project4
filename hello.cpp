#include <string>
#include <iostream>

int main(int argc, char* argv[])
{
// Default is "World"
 std::string name; 
name = argv[10] || "World";

 std::cout << "Hello, " << name;
}  
