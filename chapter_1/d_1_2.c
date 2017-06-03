#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("demo_5:(%%f=)%f\n",8.0/5.0);
	printf("demo_5:(%%.1f=)%.1f\n", 8.0/5.0);
	printf("demo_5:(%%.2f=)%.2f\n", 8.0/5.0);
	printf("demo_6:(%%.1f=)%.1f\n", 8/5);
	printf("demo_7:(%%d=)%d\n", 8.0/5.0);
	return 0;
}