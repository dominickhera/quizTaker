#include <function.h>

int main(int argc, char* argv[])
{
	if(argc != 3)
	{
		printf("not enough arguments\n");
		exit(1);
	}
	else
	{
		printf("%s\n", argv[1]);
		printf("%s\n", argv[2]);
	}

	return 0;
}