#include "main.h"

/**
 * create_file - create a file and write to it
 * @filename: the file name
 * @text_content : the content to write
 * Return: 1 on success -1 on faillure
*/

int create_file(const char *filename, char *text_content)
{
	int fid, tr;
	int i = 0;

	if (filename == NULL)
		return (-1);
	/*open filename fid = file discriptor*/
	fid = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fid == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != 0)
		i++;
	tr = write(fid, text_content, i);
	if (tr == -1)
		return (-1);
	close(fid);
	return (1);
}
