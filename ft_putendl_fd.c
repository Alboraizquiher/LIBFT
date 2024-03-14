
#include "libft.h"
//#include <unistd.h> // Para la función write
//#include <fcntl.h> // Para las constantes de file descriptor
//#include <stdio.h> // Para printf

void ft_putendl_fd(char *s, int fd) {
    while (*s) {
        write(fd, s, 1);
        s++;
    }
    write(fd, "\n", 1); // Agregar un salto de línea al final
}

/*
int main() {
    // Abrir un archivo para escritura
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("No se pudo abrir el archivo");
        return 1;
    }

    // Escribir una cadena seguida de un salto de línea en el archivo usando ft_putendl_fd
    char *str = "Hello, world!";
    ft_putendl_fd(str, fd);

    // Cerrar el archivo
    if (close(fd) == -1) {
        perror("No se pudo cerrar el archivo");
        return 1;
    }

    printf("La cadena con salto de línea se ha escrito en el archivo 'output.txt'\n");

    return 0;
}*/