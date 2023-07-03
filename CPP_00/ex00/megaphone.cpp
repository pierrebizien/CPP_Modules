#include <iostream>
#include <string>

int main(int ac , char ** av)
{
    int 	i;
	std::string str;

    i = 1;

	if (ac == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	while (i < ac)
	{
		str += av[i];
		str += " ";
		i++;
	}
	for (size_t x=0; x < str.length(); x++)
        str[x] = toupper(str[x]);
	std::cout << str << std::endl;
	return (0);
}