#include <iostream>

#include <resp.h>

int main()
{
    std::cout << "Medis" << std::endl
              << medis::MEDIS_INFO << std::endl;
    std::cout << "libmedis version: " << medis::MEDIS_VERSION << std::endl;

    return 0;
}