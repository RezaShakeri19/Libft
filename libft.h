/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshakeri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:50:02 by rshakeri          #+#    #+#             */
/*   Updated: 2025/04/20 13:23:27 by rshakeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

//Part 1: Libc functions:

	//1.1: <ctype.h> - Character classification and conversion.
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);

	// 1.2: <string.h> - String and memory manipulation.

		//1.2.1: Memory Manipulation Functions.(typically using void * pointers)
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);

		//1.2.2: String Functions.(Functions that operate on char * strings)
char	*ft_strdup(const char *s1);// POSIX
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);// BSD
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);// BSD
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);// BSD
char	*ft_strrchr(const char *s, int c);


	//1.3: <stdlib.h> - Standard utilities.

		//1.3.1: Conversion.
int		ft_atoi(const char *str);

		//1.3.2: Memory allocation.
void	*ft_calloc(size_t count, size_t size);

// Part 2: Additional functions:(*1)


	//2.1: Conversion.
char	*ft_itoa(int n);

	//2.2: String Allocation & Manipulation.
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
	
	//2.3: String Splitting/Iteration.
char	**ft_split(char const *s, char c);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

	//2.4: Output Functions.(file descriptor)
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

//Part 3: Bonus Functions.

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
#endif

//Notes:
// (*1) = Part 2 functions are custom made and they are not standard C functions.

//***

//Functions are alphabetically sorted within each group and subgroup.

//***

//*BSD = Berkeley Software Distribution.
//*POSIX = Portable Operating System Interface 

