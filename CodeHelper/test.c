
#include <stdlib.h>
#include <stdio.h>
#include "test.h"

int* data;

void generate_data(int size)
{
	data = (int*)malloc(sizeof(int) * size);
}

void delete_data()
{
	free(data);
}

int main()
{
	int data_size = 100;
	generate_data(data_size);

	for(int i=0; i < data_size; i++)
	{
		pre_process_data();
	}
	delete_data();
	
	return 0;
}
