#include "QFloat.h"

int main(int argc, char* argv[])
{
	string FileIn, FileOut;
	char type;
	FileIn = argv[1];
	FileOut = argv[2];
	type = argv[3][0];

	ifstream input;
	ofstream output;
	input.open(FileIn);
	output.open(FileOut);
	FileProcess(input, output, type);
	input.close();
	output.close();
	system("pause");
	return 0;
}
