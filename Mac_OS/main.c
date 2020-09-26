#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

size_t      ft_strlen(const char *s);
ssize_t     ft_read(int fildes, void *buf, size_t nbyte);
ssize_t     ft_write(int fildes, const void *buf, size_t nbyte);
int         ft_strcmp(const char *s1, const char *s2);

// ft_read ne renvoie pas -1 si le fd est invalide -> IL FAUT PATCH

int main()
{
//      // Ouverture FD -> Main
//         int fd = 0;
//         //fd = open("crash.crash", O_RDONLY);
//         //fd = open("main.c", O_RDONLY);
//         //fd = 0;
//         char *buf;
//         char *buf_two;
//      printf("[MINE] %d\n", ft_strlen((void*)0));
//      fprintf(stderr, "[REAL] %lu\n", strlen((void*)0));
//      printf(("[%d]\n", ft_strlen("Simple test [17]");
//      printf("%d\n", ft_strlen((void*)0));
//      printf("%d\n", ft_strlen((void*)0));
//      printf("%d\n", ft_strlen((void*)0));
//      printf("ici<< [%d]\n", ft_strlen((void*)0));
//      //printf("VRAI %zd\n", read(fd, buf, 2000));
//      //printf("%zd\n", ft_read(fd, buf, 2000));
//      printf("%zd\n", ft_write(1, "lol", ft_strlen("lol")));
//    return (0);
//     int test_num = 0;
//     printf("Debut de la zone de test\n");
//     printf("_____________________\n");
//     printf("|_____FT_STRLEN_____|\n");
//     printf("|___________________|\n");
//     ft_strlen("STR ONE") == strlen("STR ONE") ? printf("[%d]Test: OK\n", test_num++) : printf("[%d]Test: FAIL\n", test_num++);
//     ft_strlen("STR AAAA") == strlen("STR AAAA") ? printf("[%d]Test: OK\n", test_num++) : printf("[%d]Test: FAIL\n", test_num++);
//     ft_strlen("") == strlen("") ? printf("[%d]Test: OK\n", test_num++) : printf("[%d]Test: FAIL (void str)\n", test_num++);
//     ft_strlen("1") == strlen("1") ? printf("[%d]Test: OK\n", test_num++) : printf("[%d]Test: FAIL\n", test_num++);
//     ft_strlen("123456789!@#$^&*(") == strlen("123456789!@#$^&*(") ? printf("[%d]Test: OK\n", test_num++) : printf("[%d]Test: FAIL\n", test_num++);
//     ft_strlen("here") == strlen("here") ? printf("[%d]Test: OK\n", test_num++) : printf("[%d]Test: FAIL\n", test_num++);
//     ft_strlen("VERY VERY VERY VERY VERY VERY VERY VERY LONG STR WOOOOOOOW") == strlen("VERY VERY VERY VERY VERY VERY VERY VERY LONG STR WOOOOOOOW") ? printf("[%d]Test: OK\n", test_num++) : printf("[%d]Test: FAIL\n", test_num++);
//     //Crash test ft_strlen((void*)0) == strlen((void*)0) ? printf("[test_num++]Test: OK\n") : printf("[test_num++]Test: FAIL\n");
//     //strlen() de strings.h crash a l'origine sur ce cas-ci
//     test_num = 0;
//     printf("_____________________\n");
//     printf("|______FT_READ______|\n");
//     printf("|___________________|\n");
//     printf("Entrez deux fois la meme str\n") && printf("[READ LIBASM]%zd\n[READ UNISTD]%zd\n", 
//             ft_read(fd, buf, 2000), read(fd, buf, 2000));
//     printf("_____________________\n");
//     printf("|______FT_WRITE_____|\n");
//     printf("|___________________|\n");
printf("|___________________|\n");
        printf("vrai =%d\n", strcmp("Same str", "Same str"));
        printf("mien =%d\n", ft_strcmp("Same str", "Same str"));
printf("|___________________|\n");
        printf("vrai =%d\n", strcmp("Salut", "Salut lol"));
        printf("mien =%d\n", ft_strcmp("Salut", "Salut lol"));
printf("|___________________|\n");
        printf("vrai =%d\n", strcmp("Salu", "Salut lol"));
        printf("mien =%d\n", ft_strcmp("Salu", "Salut lol"));
printf("|___________________|\n");
        printf("vrai =%d\n", strcmp("Saut", "Salut lol"));
        printf("mien =%d\n", ft_strcmp("Saut", "Salut lol"));
printf("|___________________|\n");
        printf("mien =%d\n", ft_strcmp((void*)0, (void*)0));
        printf("vrai =%d\n", strcmp((void*)0, (void*)0));
//printf("|___________________|\n");

}
