#include <unistd.h> // Para la función write
#include <fcntl.h> // Para las constantes de file descriptor
#include <stdio.h> // Para printf

void ft_putchar_fd(char c, int fd) {
    write(fd, &c, 1);
}

int main() {
    // Abrir un archivo para escritura
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("No se pudo abrir el archivo");
        return 1;
    }

    // Escribir caracteres en el archivo usando ft_putchar_fd
    ft_putchar_fd('H', fd);
    ft_putchar_fd('e', fd);
    ft_putchar_fd('l', fd);
    ft_putchar_fd('l', fd);
    ft_putchar_fd('o', fd);
    ft_putchar_fd('\n', fd);

    // Cerrar el archivo
    if (close(fd) == -1) {
        perror("No se pudo cerrar el archivo");
        return 1;
    }

    printf("Los caracteres se han escrito en el archivo 'output.txt'\n");

    return 0;
}
