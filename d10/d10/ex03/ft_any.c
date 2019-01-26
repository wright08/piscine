/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 07:22:27 by rwright           #+#    #+#             */
/*   Updated: 2019/01/21 07:45:09 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **arr, int (*f)(char *))
{
	int i;

	i = 0;
	while (arr[i])
		if ((*f)(arr[i++]))
			return (1);
	return (0);
}
