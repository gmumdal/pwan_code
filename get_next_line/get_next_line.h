/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongsh <hyeongsh@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:21:48 by hyeongsh          #+#    #+#             */
/*   Updated: 2023/10/17 14:11:48 by hyeongsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				fd;
	char			leave[BUFFER_SIZE + 1];
	struct s_list	*next;
}	t_list;

char	*get_next_line(int fd);
t_list	*ft_lstadd_back(t_list **head, int fd);
char	*ft_setstr(char	*leave, t_list *cur);
char	*read_n_join(char *toss, int fd, int size);
char	*ft_newstr(char *toss, int *size);
int		ft_strcat(char *toss, char *buf);
char	*ft_substr(char *toss, t_list *cur, int len);
int		ft_check(char *toss);
void	ft_lstdel(t_list **head, int fd);

#endif
