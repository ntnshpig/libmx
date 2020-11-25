#include "../inc/libmx.h"

char *mx_file_to_str(const char *file) {
	if(!file)  return NULL;
	
	int file1 = open(file, O_RDONLY);
	int file2 = open(file, O_RDONLY);
	if(file1 < 0){
		close(file1);
		return NULL;
	}

	int filelen = 0;
	char buf;

    while(read(file2, &buf, 1))
        filelen++;

	if(filelen == 0) return NULL;

	char *str = mx_strnew(filelen);

	read(file1, str, filelen);
	close(file1);
	
	return str;
}
