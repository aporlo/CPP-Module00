#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i =  1 ; argc > 1 && argv[i] ; i++)
    {
        for (int j = 0; argv[i][j] ; j++)
        {
            if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                argv[i][j] -= 32;
            std::cout << argv[i][j];
        }
    }
    std::cout << std::endl;
    return 0;
}