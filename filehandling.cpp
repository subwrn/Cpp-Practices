#include <iostream>
#include <vector>
#include <fstream>
int main()
{
    std::ofstream file("first.txt", std::ios::app);
    if (file.is_open())
    {
        std::cout << "great";
    }
    file << "hey";
    std::vector<std::string> stfil;
    stfil.push_back("kera");
    stfil.push_back("baje");
    stfil.push_back("pandit");
    for (std::string names : stfil)
    {
        file << names << std::endl;
    }
    file.close();
    return 0;
}