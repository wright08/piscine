/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 21:11:51 by rwright           #+#    #+#             */
/*   Updated: 2019/01/14 18:52:31 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, char *src)
{
	char *dst_start;

	dst_start = dst;
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (dst_start);
}