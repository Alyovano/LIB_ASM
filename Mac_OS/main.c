#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

size_t      ft_strlen(const char *s);
ssize_t     ft_read(int fildes, void *buf, size_t nbyte);
ssize_t     ft_write(int fildes, const void *buf, size_t nbyte);
int         ft_strcmp(const char *s1, const char *s2);
char        *ft_strcpy(char *dst, const char *src);
char        *ft_strdup(const char *s1);

void     test_strdup(void)
{
        printf("_____________________\n");
        printf("|_____FT_STRDUP_____|\n");
        printf("|___________________|\n");
        printf("LIBASM=[%s]\n", ft_strdup("Salut"));
        printf("REAL_LIB=[%s]\n", strdup("Salut"));
        printf("LIBASM=[%s]\n", ft_strdup("Coucou"));
        printf("REAL_LIB=[%s]\n", strdup("Coucou"));
        printf("LIBASM=[%s]\n", ft_strdup(""));
        printf("REAL_LIB=[%s]\n", strdup(""));
        printf("LIBASM=[%s]\n", ft_strdup("Phrase un peu plus longue"));
        printf("REAL_LIB=[%s]\n", strdup("Phrase un peu plus longue"));
        printf("LIBASM=[%s]\n", ft_strdup("Presque la fin"));
        printf("REAL_LIB=[%s]\n", strdup("Presque la fin"));
        printf("LIBASM=[%s]\n", ft_strdup("Fin"));
        printf("REAL_LIB=[%s]\n", strdup("Fin"));
}

void    test_strlen(void)
{
        printf("_____________________\n");
        printf("|_____FT_STRLEN_____|\n");
        printf("|___________________|\n");
        printf("LIBASM=[%ld]\n", ft_strlen("Coucou"));
        printf("REAL_LIB=[%ld]\n", strlen("Coucou"));
        printf("LIBASM=[%ld]\n", ft_strlen("test simple"));
        printf("REAL_LIB=[%ld]\n", strlen("test simple"));
        printf("LIBASM=[%ld]\n", ft_strlen(""));
        printf("REAL_LIB=[%ld]\n", strlen(""));
        printf("LIBASM=[%ld]\n", ft_strlen("1"));
        printf("REAL_LIB=[%ld]\n", strlen("1"));
        printf("LIBASM=[%ld]\n", ft_strlen("Aaaaaaaaaaaaaaaafdgkjdfgdfhjgfhjkdgfhjkfdgjhkgfdjhfdgjhdfgjhkfgdkhjfgdjkhgfdjhkgfdjkhgfjdjhkgfdhjkgfhjkgfdkhjdfgkhjfgdkhj"));
        printf("REAL_LIB=[%ld]\n", strlen("Aaaaaaaaaaaaaaaafdgkjdfgdfhjgfhjkdgfhjkfdgjhkgfdjhfdgjhdfgjhkfgdkhjfgdjkhgfdjhkgfdjkhgfjdjhkgfdhjkgfhjkgfdkhjdfgkhjfgdkhj"));
        printf("LIBASM=[%ld]\n", ft_strlen("Fin"));
        printf("REAL_LIB=[%ld]\n", strlen("Fin"));
}

void    test_strcpy()
{
        char a[] = "Salut";
        char b[] = "Coucou";
        printf("_____________________\n");
        printf("|_____FT_STRCPY_____|\n");
        printf("|___________________|\n");
        printf("LIBASM=[%s]\n", ft_strcpy(a, b));
}

void    test_read(void)
{
        // Donner un fd invalide = -1
        char buf[355];
        int fd = open("main.c", O_RDONLY);
        fd = 0;
        printf("_____________________\n");
        printf("|______FT_READ______|\n");
        printf("|___________________|\n");
        printf("LIBASM=[%zd]\n", read(fd, buf, 32));
        printf("REAL_LIB=[%zd]\n", ft_read(fd, buf, 32));
}

void    test_write(void)
{
        // Donner un fd invalide = -1
        char buf[355];
        int fd = open("TEST_WRITE.txt", O_CREAT | O_RDWR);
        fd = 0;
        printf("_____________________\n");
        printf("|______FT_WRITE_____|\n");
        printf("|___________________|\n");
        printf("LIBASM=[%zd]\n", ft_write(fd, buf, 16));
        printf("REAL_LIB=[%zd]\n", write(fd, buf, 16));
}

void    test_strcmp(void)
{
        printf("_____________________\n");
        printf("|_____FT_STRCMP_____|\n");
        printf("|___________________|\n");
        printf("LIBASM=[%d]\n", ft_strcmp("Coucou", "Couleur"));
        printf("REAL_LIB=[%d]\n", strcmp("Coucou", "Couleur"));
        printf("LIBASM=[%d]\n", ft_strcmp("Salut", "Salaud"));
        printf("REAL_LIB=[%d]\n", strcmp("Brouillard", "Brouillon"));
        printf("LIBASM=[%d]\n", ft_strcmp("Chachacha", "Chachachi"));
        printf("REAL_LIB=[%d]\n", strcmp("Chachacha", "Chachachi"));
        printf("LIBASM=[%d]\n", ft_strcmp("", ""));
        printf("REAL_LIB=[%d]\n", strcmp("", ""));
}

int main()
{
        test_strlen();
        test_strdup();
        test_strcpy();
        test_read();
        test_write();
        test_strcmp();
// //      // Ouverture FD -> Main
//          int fd = 0;
//          fd = open("crash.crash", O_RDONLY);
// //         //fd = open("main.c", O_RDONLY);
// //         //fd = 0;
//                 char *buf;
//                 char *buf_two;
// //      printf("[MINE] %d\n", ft_strlen((void*)0));
// //      fprintf(stderr, "[REAL] %lu\n", strlen((void*)0));
// //      printf(("[%d]\n", ft_strlen("Simple test [17]");
// //      printf("%d\n", ft_strlen((void*)0));
// //      printf("%d\n", ft_strlen((void*)0));
// //      printf("%d\n", ft_strlen((void*)0));
// //      printf("ici<< [%d]\n", ft_strlen((void*)0));
// //      //printf("VRAI %zd\n", read(fd, buf, 2000));
// //      //printf("%zd\n", ft_read(fd, buf, 2000));
// //      printf("%zd\n", ft_write(1, "lol", ft_strlen("lol")));
// //    return (0);
// //     int test_num = 0;
// //     printf("Debut de la zone de test\n");
// //     printf("_____________________\n");
// //     printf("|_____FT_STRLEN_____|\n");
// //     printf("|___________________|\n");
// //     ft_strlen("STR ONE") == strlen("STR ONE") ? printf("[%d]Test: OK\n", test_num++) : printf("[%d]Test: FAIL\n", test_num++);
// //     ft_strlen("STR AAAA") == strlen("STR AAAA") ? printf("[%d]Test: OK\n", test_num++) : printf("[%d]Test: FAIL\n", test_num++);
// //     ft_strlen("") == strlen("") ? printf("[%d]Test: OK\n", test_num++) : printf("[%d]Test: FAIL (void str)\n", test_num++);
// //     ft_strlen("1") == strlen("1") ? printf("[%d]Test: OK\n", test_num++) : printf("[%d]Test: FAIL\n", test_num++);
// //     ft_strlen("123456789!@#$^&*(") == strlen("123456789!@#$^&*(") ? printf("[%d]Test: OK\n", test_num++) : printf("[%d]Test: FAIL\n", test_num++);
// //     ft_strlen("here") == strlen("here") ? printf("[%d]Test: OK\n", test_num++) : printf("[%d]Test: FAIL\n", test_num++);
// //     ft_strlen("VERY VERY VERY VERY VERY VERY VERY VERY LONG STR WOOOOOOOW") == strlen("VERY VERY VERY VERY VERY VERY VERY VERY LONG STR WOOOOOOOW") ? printf("[%d]Test: OK\n", test_num++) : printf("[%d]Test: FAIL\n", test_num++);
// //     //Crash test ft_strlen((void*)0) == strlen((void*)0) ? printf("[test_num++]Test: OK\n") : printf("[test_num++]Test: FAIL\n");
// //     //strlen() de strings.h crash a l'origine sur ce cas-ci
// //     test_num = 0;
//     printf("_____________________\n");
//     printf("|______FT_READ______|\n");
//     printf("|___________________|\n");
//     printf("Entrez deux fois la meme str\n") && printf("[READ LIBASM]%zd\n[READ UNISTD]%zd\n", 
//             ft_read(fd, buf, 2000), read(fd, buf, 2000));
// //     printf("_____________________\n");
// //     printf("|______FT_WRITE_____|\n");
// //     printf("|___________________|\n");
// // printf("|___________________|\n");
// //         printf("vrai =%d\n", strcmp("Same str", "Same str"));
// //         printf("mien =%d\n", ft_strcmp("Same str", "Same str"));
// // printf("|___________________|\n");
// //         printf("vrai =%d\n", strcmp("Salut", "Salut lol"));
// //         printf("mien =%d\n", ft_strcmp("Salut", "Salut lol"));
// // printf("|___________________|\n");
// //         printf("vrai =%d\n", strcmp("Salu", "Salut lol"));
// //         printf("mien =%d\n", ft_strcmp("Salu", "Salut lol"));
// // printf("|___________________|\n");
// //         printf("vrai =%d\n", strcmp("Saut", "Salut lol"));
// //         printf("mien =%d\n", ft_strcmp("Saut", "Salut lol"));
// // printf("|___________________|\n");
// //         printf("mien =%d\n", ft_strcmp((void*)0, (void*)0));
// //         printf("vrai =%d\n", strcmp((void*)0, (void*)0));
// //printf("|___________________|\n");
//         char a[] = "Coucou les copains";
//         char b[] = "Coucou les fdp ca va ou quoi ptn ? ";
//         //ft_strcpy(a, b);
//         printf("LIBASM %s\n", ft_strcpy(b, a));
//         //printf("VRAI %s\n", strcpy(b, a));
                return 0;

}
