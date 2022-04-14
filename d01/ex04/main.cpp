#include <iostream>
#include <string>
#include <fstream>

void replace(std::string &content, std::string &s1, std::string &s2)
{
	int beginning;
	int end;

	beginning = content.find(s1, 0);
	if (beginning == -1)
		return ;
	end = s1.length();
	content.erase(beginning, end);
	content.insert(beginning, s2);
}

int main(int argc, char **argv)
{
	if (argc < 4) {
		std::cerr << "Error: wrong number of arguments!" << std::endl;
		return (1);
	}
	if (argv[2][0] == '\0')
	{
		std::cerr << "Error: 2nd argument is empty!" << std::endl;
		return (1);
	}
	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::ifstream ifs(filename);
	if (!ifs.is_open()) {

		std::cerr << "Error: " << filename << " can't be opened!.\n";
		return (1);
	}
	std::ofstream ofs(filename + ".replace");
	if (!ofs.is_open()) {

		std::cerr << "Error: " << filename << ".replace can't be opened or created.\n";
		ifs.close();
		return (1);
	}
	std::string content;
	while (!ifs.eof())
	{
		getline(ifs, content);
		replace(content, s1, s2);
		ofs << content << "\n";
	}
	ifs.close();
	ofs.close();
	return 0;
}
