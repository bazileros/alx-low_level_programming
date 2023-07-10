#include "main.h"

/*
* read_textfile - readfile to stdout
* @filename - text file being read
* @letters: numbers of letters to read
*
* Return: write actual number of bytes read and printed
*
*/

ssize_t read_textfile(const char *filename, size_t letters);
{
  char *buff;
  ssize_t wrt;
  ssize_t fp;
  ssize_t reading;

  fp = open(filename, 0_RDONLY);
  if (fp == -1)
      return (0);

  buff = malloc(sizeof(char) * letters);
  
  reading = read(fp, buffer, letters);
  
  wrt = write(STDOUT_FILENO, buff, reading);

  free(buff);
  close(fp);
  return(wrt);

}
