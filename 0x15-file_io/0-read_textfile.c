#include "main.h"

/**
 * read_textfile - read a text from a file
 * @filename : file name
 * @letters : number of letters to read wnd write
 * Return: number of characters printed 
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fid, tr, char_printed;
	char *file_string;

	if (filename == NULL)
		return (0);
	/*opening the file filename and check if the system call doesnt return err*/
	fid = open(filename, O_RDONLY);
	if (fid == -1)
		return (0);
	else
	{
		/*allocating the memory for file_string and check if its available*/
		file_string = malloc(sizeof(char) * letters);
		if (file_string == NULL)
			return (0);
		/*read return the number of characters*/
		tr = read(fid, file_string, letters);
		if (tr == -1)
			return (0);
		else
			char_printed = write (1, file_string, tr);
	}
	
	/*free the allocated memory*/
	free (file_string);
	return (char_printed);
	
}