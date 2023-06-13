#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>

/**
 * print_error - Print error message and exit with status code 98.
 * @msg: The error message to display.
 */
void print_error(const char *msg)
{
fprintf(stderr, "%s\n", msg);
exit(98);
}

/**
 * print_magic - Print the magic number from the ELF header.
 * @ident: Pointer to the ELF identification array.
 */
void print_magic(const unsigned char *ident)
{
printf("Magic:  ");
for (int i = 0; i < EI_NIDENT; i++)
printf("%02x ", ident[i]);
printf("\n");
}

/**
 * print_class - Print the ELF class (32-bit or 64-bit) from the ELF header.
 * @ident: Pointer to the ELF identification array.
 */
void print_class(const unsigned char *ident)
{
printf("Class:  %u-bit\n", (ident[EI_CLASS] == ELFCLASS64) ? 64 : 32);
}

/**
 * print_data - Print the data encoding (endianess) from the ELF header.
 * @ident: Pointer to the ELF identification array.
 */
void print_data(const unsigned char *ident)
{
printf("Data:  ");
switch (ident[EI_DATA])
{
case ELFDATA2LSB:
printf("2's complement, little-endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big-endian\n");
break;
default:
printf("Unknown\n");
break;
}
}

/**
 * print_version - Print the version from the ELF header.
 * @ident: Pointer to the ELF identification array.
 */
void print_version(const unsigned char *ident)
{
printf("Version:  %d\n", ident[EI_VERSION]);
}

/**
 * print_osabi - Print the OS/ABI from the ELF header.
 * @ident: Pointer to the ELF identification array.
 */
void print_osabi(const unsigned char *ident)
{
printf("OS/ABI:  ");
switch (ident[EI_OSABI])
{
case ELFOSABI_SYSV:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("Sun Solaris\n");
break;
case ELFOSABI_IRIX:
printf("IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("Compaq TRU64 UNIX\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone (embedded) application\n");
break;
default:
printf("Unknown\n");
break;
}
}

/**
 * print_abiversion - Print the ABI version from the ELF header.
 * @ident: Pointer to the ELF identification array.
 */
void print_abiversion(const unsigned char *ident)
{
printf("ABI Version:  %d\n", ident[EI_ABIVERSION]);
}

/**
 * print_type - Print the file type from the ELF header.
 * @type - The file type to be printed (Elf64_Half).
*/
void print_type(Elf64_Half type)
{
printf("Type:  ");
switch (type)
{
case ET_NONE:
printf("NONE (No file type)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("Unknown\n");
break;
}
}

/**
 * print_entry_point - Print the entry point address from the ELF header.
 * @entry: The entry point address.
 */
void print_entry_point(Elf64_Addr entry)
{
printf("Entry point address:  0x%lx\n", entry);
}

int main(int argc, char *argv[])
{
if (argc != 2)
print_error("Usage: elf_header elf_filename");

int fd = open(argv[1], O_RDONLY);
if (fd == -1)
print_error("Error opening file");

Elf64_Ehdr header;
ssize_t bytes_read = read(fd, &header, sizeof(header));
if (bytes_read != sizeof(header))
print_error("Error reading file");

if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3) {
print_error("Not an ELF file");
}
print_magic(header.e_ident);
print_class(header.e_ident);
print_data(header.e_ident);
print_version(header.e_ident);
print_osabi(header.e_ident);
print_abiversion(header.e_ident);
print_type(header.e_type);
print_entry_point(header.e_entry);

close(fd);
return (0);
}
