#include <stdio.h>
#include <stdlib.h>

//const int len = 5;

int main()
{
	int strlen = 0;
	char msg[] = "Hell"; //msg = "BYE";
	printf("%s\n", msg);
	for (int i = 0; i > -1; i++)
	{
		printf("%c", msg[i]);
		if (msg[i] > 0)
			strlen++;
		if (msg[i] == 0)
			break;
	}
	printf("\nString Length = %d\n", strlen);
	system("pause");
	return 0;
}