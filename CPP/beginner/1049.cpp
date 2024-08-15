#include <iostream>
#include <string>

int main()
{
    std::string primeiraCLasse;

    std::cin >> primeiraCLasse;

    if (primeiraCLasse == "vertebrado")
    {
        std::cin >> primeiraCLasse;
        if (primeiraCLasse == "ave")
        {
            std::cin >> primeiraCLasse;
            if (primeiraCLasse == "carnivoro")
            {
                std::cout << "aguia";
            }
            else if (primeiraCLasse == "onivoro")
            {
                std::cout << "pomba";
            }
            else
                std::cout << "VALOR NÃO SUPORTAVEL";
        }
        else if (primeiraCLasse == "mamifero")
        {
            std::cin >> primeiraCLasse;
            if (primeiraCLasse == "onivoro")
            {
                std::cout << "homem";
            }
            else if (primeiraCLasse == "herbivoro")
            {
                std::cout << "vaca";
            }
            else
                std::cout << "VALOR NÃO SUPORTAVEL";
        }
        else
            std::cout << "VALOR NÃO SUPORTAVEL";
    }
    else if (primeiraCLasse == "invertebrado")
    {
        std::cin >> primeiraCLasse;
        if (primeiraCLasse == "inseto")
        {
             std::cin >> primeiraCLasse;
            if (primeiraCLasse == "hematofago")
            {
                std::cout << "pulga";
            }
            else if (primeiraCLasse == "herbivoro")
            {
                std::cout << "lagarta";
            }
            else
                std::cout << "VALOR NÃO SUPORTAVEL";
        }
        else if (primeiraCLasse == "anelideo")
        {
               std::cin >> primeiraCLasse;
            if (primeiraCLasse == "hematofago")
            {
                std::cout << "sanguessuga";
            }
            else if (primeiraCLasse == "onivoro")
            {
                std::cout << "minhoca";
            }
            else
                std::cout << "VALOR NÃO SUPORTAVEL";
        }
        else
            std::cout << "VALOR NÃO SUPORTAVEL";
    }
    else
        std::cout << "VALOR NÃO SUPORTAVEL";

    return 0;
}
