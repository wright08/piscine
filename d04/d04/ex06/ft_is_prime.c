/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 06:56:13 by rwright           #+#    #+#             */
/*   Updated: 2019/01/12 14:42:03 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int n)
{
	double	i;
	double	sqrt;

	if (n <= 1)
		return (0);
	i = 0;
	while (i++ < 10)
	{
		sqrt = (n + n / sqrt) / 2;
	}
	i = 2;
	while (i <= sqrt)
	{
		if (n / i == (int)(n / i))
			return (0);
		i++;
	}
	return (1);
}