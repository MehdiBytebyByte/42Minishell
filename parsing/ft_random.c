/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_random.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouigui <ymouigui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:35:55 by ymouigui          #+#    #+#             */
/*   Updated: 2024/11/04 23:28:59 by ymouigui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

char	*ft_random(void)
{
	static int	index;
	char		*filename;

	filename = ft_itoa(index);
	index++;
	return (filename);
}

char	*find_name(void)
{
	char	*tmp;

	tmp = ft_random();
	tmp = ft_strjoin("/tmp/.", tmp);
	while (access(tmp, F_OK) == 0)
		tmp = ft_strjoin("/tmp/.", ft_random());
	return (tmp);
}

void	ft_unlink(t_cmd *cmd)
{
	t_cmd	*t;

	t = cmd;
	while (t)
	{
		if (t->herdoc_file)
			unlink(t->herdoc_file);
		t = t->next;
	}
}
