/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:31:23 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/27 08:29:45 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

int	main(int argc, char **argv) {
	if (argc != 4)
	{
		std::cout << "wrong amount fo arguments" << std::endl;
		return (1);
	}
	std::string		filename = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::ifstream	my_file;
	std::ofstream	new_file;
	std::string		line;
	std::string		new_filename = filename + ".replace";

	my_file.open(filename.c_str(), std::ios::in);
	if (!my_file)
	{
		std::cerr << "error: " << filename << " can not be opened" << std::endl;
		return (1);
	}
	new_file.open(new_filename.c_str(), std::ios::out);
	if (!new_file)
	{
		std::cerr << "error: " << new_filename << " can not be opened" << std::endl;
		my_file.close();
		return (1);
	}
	while (getline(my_file, line)) {
		// std::cout << "before: " << line << std::endl;
		compareAndAdapt(line, s1, s2);
		// std::cout << "after: " << line << std::endl;
		new_file << line;
		if (my_file.peek() != EOF)
			new_file << std::endl;
	}
	my_file.close();
	new_file.close();
	/*std::string		output;
	std::fstream	n;

	n.open("new.txt", std::ios::in);
	if (!n)
		std::perror("n error");
	while (getline(n, output)) {
		std::cout << output << std::endl;
	}
	n.close();*/
	return (0);
}
