/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 07:03:19 by rwright           #+#    #+#             */
/*   Updated: 2019/01/21 08:07:52 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int len, void (*f)(int))
{
	int i;

	i = 0;
	while (i < len)
		(*f)(tab[i++]);
}
