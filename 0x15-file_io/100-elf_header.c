#include <elf.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define REV(n) ((n << 24) | (((n >> 16) << 24) >> 16) | \
(((n << 16) >> 24) << 16) | (n >> 24))

/**
* verify - verify the file to check if it's an ELF
* @e_inden: the ELF struct
* Return: no return, it's a void function.
*/
void verify(unsigned char *e_inden)
{
if (*(e_inden) == 0x7f && *(e_inden + 1) == 'E' &&
*(e_inden + 2) == 'L' && *(e_inden + 3) == 'F')
{
printf("ELF Header:\n");
}
else
{
dprintf(STDERR_FILENO, "Error: this file is not a valid ELF\n");
exit(98);
}
}

/**
* magic - print magic number
* @e_inden: thes ELF struct
* Return: no return, it's a void function.
*/
void magic(unsigned char *e_inden)
{
int i; /* the index to count the magic bytes */
int limit;

limit = EI_NIDENT - 1;
printf("  Magic:   ");
for (i = 0; i < limit; i++)
printf("%02x ", *(e_inden + i));
printf("%02x\n", *(e_inden + i);
}

/**
* class - print the class of the ELF
* @e_inden: the ELF struct
* Return: no return, it's a void function.
*/
void class(unsigned char *e_inden)
{
printf("  Class:                             ");
if (e_inden[EI_CLASS] == ELFCLASSNONE)
printf("This class is invalid\n");
else if (e_inden[EI_CLASS] == ELFCLASS32)
printf("ELF32\n");
else if (e_inden[EI_CLASS] == ELFCLASS64)
printf("ELF64\n");
else
printf("<unknown: %x>\n", e_inden[EI_CLASS]);
}

/**
* data - prints the type of data
* @e_inden: the ELF struct
* Return: no return, it's a void function.
*/
void data(unsigned char *e_inden)
{
printf("  Data:                              ");
if (e_inden[EI_DATA] == ELFDATANONE)
printf("Unknown data format\n");
else if (e_inden[EI_DATA] == ELFDATA2LSB)
printf("2's complement, little endian\n");
else if (e_inden[EI_DATA] == ELFDATA2MSB)
printf("2's complement, big endian\n");
else
printf("<unknown: %x>\n", e_inden[EI_DATA]);
}

/**
* version - prints the version of the file
* @e_inden: the ELF struct
* Return: no return, it's a void function.
*/
void version(unsigned char *e_inden)
{
printf("  Version:                           ");
if (e_inden[EI_VERSION] == EV_CURRENT)
printf("%i (current)\n", EV_CURRENT);
else
printf("%i\n", e_inden[EI_VERSION]);
}

/**
* osabi - print the osabi
* @e_inden: the ELF struct
* Return: no return, it's a void function.
*/
void osabi(unsigned char *e_inden)
{
printf("  OS/ABI:                            ");
if (e_inden[EI_OSABI] == ELFOSABI_SYSV)
printf("UNIX - System V\n");
else if (e_inden[EI_OSABI] == ELFOSABI_HPUX)
printf("UNIX - HP-UX\n");
else if (e_inden[EI_OSABI] == ELFOSABI_NETBSD)
printf("UNIX - NetBSD\n");
else if (e_inden[EI_OSABI] == ELFOSABI_LINUX)
printf("UNIX - Linux\n");
else if (e_inden[EI_OSABI] == ELFOSABI_SOLARIS)
printf("UNIX - Solaris\n");
else if (e_inden[EI_OSABI] == ELFOSABI_IRIX)
printf("UNIX - IRIX\n");
else if (e_inden[EI_OSABI] == ELFOSABI_FREEBSD)
printf("UNIX - FreeBSD\n");
else if (e_inden[EI_OSABI] == ELFOSABI_TRU64)
printf("UNIX - TRU64\n");
else if (e_inden[EI_OSABI] == ELFOSABI_ARM)
printf("ARM\n");
else if (e_inden[EI_OSABI] == ELFOSABI_STANDALONE)
printf("Standalone App\n");
else
printf("<unknown: %x>\n", e_inden[EI_OSABI]);
}

/**
* type - prints the type
* @e_inden: the ELF struct
* @e_typ: data to be compared and print.
* Return: no return, it's a void function.
*/
void type(unsigned int e_typ, unsigned char *e_inden)
{
e_inden[EI_DATA] == ELFDATA2MSB ? e_typ = e_typ >> 8 : e_typ;

printf("  Type:                              ");
if (e_typ == ET_NONE)
printf("NONE (Unknown type)\n");
else if (e_typ == ET_REL)
printf("REL (Relocatable file)\n");
else if (e_typ == ET_EXEC)
printf("EXEC (Executable file)\n");
else if (e_typ == ET_DYN)
printf("DYN (Shared object file)\n");
else if (e_typ == ET_CORE)
printf("CORE (Core file)\n");
else
printf("<unknown: %x>\n", e_typ);
}

/**
* entry - print the entry point
* @e_inden: the ELF struct
* @e_entr: the data to print
* Return: no return, it's a void function.
*/
void entry(unsigned int e_entr, unsigned char *e_inden)
{
if (e_inden[EI_DATA] == ELFDATA2MSB)
e_entr = REV(e_entr);

printf("  Entry point address:               ");
printf("%#x\n", (unsigned int)e_entr);
}

/**
* main - read an ELF file.
* @argc: the number of args
* @argv: the Args
* section header: the header of this function is holberton.h
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
int fd, _read, _close;
Elf64_Ehdr *file;

if (argc > 2 || argc < 2)
dprintf(STDERR

