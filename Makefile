SRCS = ft_isalpha.c \
            ft_isdigit.c \
            ft_isalnum.c \
            ft_isascii.c \
            ft_isprint.c\
            ft_strlen.c \
            ft_bzero.c \
            ft_memset.c \
            ft_memcpy.c \
            ft_calloc.c \
            ft_strmapi.c \
            ft_toupper.c \
            ft_tolower.c \
            ft_itoa.c \
            ft_strchr.c \
            ft_strrchr.c \
            ft_strlcpy.c \
            ft_strlcat.c \
            ft_strncmp.c \
            ft_memchr.c \
            ft_memmove.c \
            ft_memcmp.c \
            ft_strnstr.c \
            ft_atoi.c \
            ft_strdup.c \
            ft_strjoin.c \
            ft_substr.c \
            ft_strtrim.c \
            ft_split.c \
            ft_putchar_fd.c \
            ft_putstr_fd.c \
            ft_putendl_fd.c \
            ft_putnbr_fd.c \
            ft_striteri.c
MAIN = main.c
OBJS = ${SRCS:.c=.o}
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
RM = rm -rf
LIBC = ar rc
OUT = ./a.out
all: ${NAME}
${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
clean:
	@${RM} ${OBJS}
fclean: clean
	@${RM} ${NAME}
re: fclean all
.PHONY: all clean fclean re bonus

/*
Bu bir Makefile'dır ve bu belgede, bir C kütüphanesinin derlenmesi ve kurulması için aşamalar tanımlanmıştır.

SRCS değişkeni, kütüphanede bulunan tüm C kaynak dosyalarının adını içerir.
MAIN değişkeni, uygulamanın ana kaynak dosyasının adını içerir.
OBJS değişkeni, C kaynak dosyalarından oluşan nesne dosyalarının adını içerir.
NAME değişkeni, kütüphanenin adını içerir.
CC değişkeni, derleme i
network error
in kullanılan C derleyicisinin adını belirtir.

CFLAGS değişkeni, derleme için kullanılan seçenekleri belirtir.
RM değişkeni, dosyaları silmek için kullanılan komutu belirtir.
LIBC değişkeni, kütüphanenin oluşturulması için kullanılan komutu belirtir.
OUT değişkeni, çalıştırılan uygulamanın adını belirtir.
"all" hedefi, kütüphanenin derlenmesini ve oluşturulmasını sağlar.
"clean" hedefi, oluşan nesne dosyalarını siler.
"fclean" hedefi, nesne dosyalarını ve kütüphanenin adını siler.
"re" hedefi, "fclean" hedefini çalıştırır ve ardından "all" hedefini çalıştırır.
".PHONY" hedefi, belirtilen hedeflerin her zaman çalışmasını sağlar.
*/
