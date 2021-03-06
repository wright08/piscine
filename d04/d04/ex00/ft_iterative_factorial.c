/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 16:16:30 by rwright           #+#    #+#             */
/*   Updated: 2019/01/12 13:20:24 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int n)
{
	long factorial;

	if (n < 0)
		return (0);
	factorial = 1;
	while (n > 1)
	{
		factorial *= n--;
		if (factorial > 2147483647)
		{
			factorial = 0;
			break ;
		}
	}
	return ((int)factorial);
}
