#include "main.h"

/**
 * append_text_to_file - append text at the end
 * @filename: the fiel ame
 * @text_content : the text contetnt
 * Return: return 1 or -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fid, ln = 0, tr;

	if (filename == NULL)
		return (-1);
	fid = open(filename, O_WRONLY | O_APPEND);
	if (fid == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	while (text_content[ln] != 0)
		ln++;
	tr = write(fid, text_content, ln);
	if (tr == -1)
		return (-1);
	close(fid);
	return (1);
}
