#include <elf.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * elf_check - Confirms if it's an elf file
 * @e_id: Pointer to an array of elf magic nums
 * Return: Exit with 98 if not elf
 */
void elf_check(unsigned char *e_id)
{
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (e_id[idx] != 127 &&
			e_id[idx] != 'E' &&
			e_id[idx] != 'L' &&
			e_id[idx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - Displays magic numbers
 * @e_id: Pointer to an array of lef magic nums
 * Return: Nogthing
 */
void print_magic(unsigned char *e_id)
{
	int idx;

	printf("  Magic:   ");

	for (idx = 0; idx < EI_NIDENT; idx++)
	{
		printf("%02x", e_id[idx]);
		if (idx == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Displays the class
 * @e_id: Pointer to an array of ELF classes
 * Return: Nothing
 */
void print_class(unsigned char *e_id)
{
	printf("  Class:                             ");

	switch (e_id[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_id[EI_CLASS]);
	}

}

/**
 * print_data - Displays elf data
 * @e_id: Pointer to an array of elf classes
 * Return: Nothing
 */
void print_data(unsigned char *e_id)
{
	printf("  Data:                              ");

	switch (e_id[EI_DATA])
	{
	case ELFDATANONE:
		printf("nine\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_id[EI_CLASS]);
	}
}

/**
 * print_version - Displays elf data version
 * @e_id: Pointer to array of elf classes
 * Return: Nothing
 */
void print_version(unsigned char *e_id)
{
	printf("  Version:                           %d",
		e_id[EI_VERSION]);

	switch (e_id[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osab - Displays lf data os/abi
 * @e_id: Pinter to array of elf classes
 * Return: Nothing
 */
void print_osab(unsigned char *e_id)
{
	printf("  OS/ABI:                            ");

	switch (e_id[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_id[EI_OSABI]);
	}
}

/**
 * print_abi - Displays elf header abi version
 * @e_id: Pointer to array of elf abi versions
 * Return: Nothing
 */
void print_abi(unsigned char *e_id)
{
	printf("  ABI Version:                       %d\n",
		e_id[EI_ABIVERSION]);
}

/**
 * print_type - Displays elf header type
 * @e_typ: Elf type
 * @e_id: Pointer to array of elf class
 * Return: Nohing
 */
void print_type(unsigned int e_typ, unsigned char *e_id)
{
	if (e_id[EI_DATA] == ELFDATA2MSB)
		e_typ >>= 8;

	printf("  Type:                              ");

	switch (e_typ)
	{
	case ET_NONE:
		printf("NONE (None)\n");
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
		printf("<unknown: %x>\n", e_typ);
	}
}

/**
 * print_entry - Displays elf header entry point
 * @e_ent: Entry poin taddress
 * @e_id: Pointer to array of elf class
 * Return: Nothing
 */
void print_entry(unsigned long int e_ent, unsigned char *e_id)
{
	printf("  Entry point address:               ");

	if (e_id[EI_DATA] == ELFDATA2MSB)
	{
		e_ent = ((e_ent << 8) & 0xFF00FF00) |
			  ((e_ent >> 8) & 0xFF00FF);
		e_ent = (e_ent << 16) | (e_ent >> 16);
	}

	if (e_id[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_ent);

	else
		printf("%#lx\n", e_ent);
}

/**
 * closer - Close the elf file
 * @fd: Elf file descriptor
 * Return: Nothing
 */
void closer(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(98);
	}
}

/**
 * main - Main file for displaying elf header info
 * @argc: Number of args to program
 * @argv: Array of pointers to args
 * Return: 0 if it works.
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
	Elf64_Ehdr *header_bfr;
	int op, re;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header_bfr = malloc(sizeof(Elf64_Ehdr));
	if (header_bfr == NULL)
	{
		closer(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	re = read(op, header_bfr, sizeof(Elf64_Ehdr));
	if (re == -1)
	{
		free(header_bfr);
		closer(op);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	elf_check(header_bfr->e_ident);
	printf("ELF Header:\n");
	print_magic(header_bfr->e_ident);
	print_class(header_bfr->e_ident);
	print_data(header_bfr->e_ident);
	print_version(header_bfr->e_ident);
	print_osab(header_bfr->e_ident);
	print_abi(header_bfr->e_ident);
	print_type(header_bfr->e_type, header_bfr->e_ident);
	print_entry(header_bfr->e_entry, header_bfr->e_ident);

	free(header_bfr);
	closer(op);
	return (0);
}


