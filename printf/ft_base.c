/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjunior <rjunior@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:06:07 by rjunior           #+#    #+#             */
/*   Updated: 2022/03/05 18:31:16 by rjunior          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_base(long long int nbr, char *base)
{
	int	i;

	i = 0;
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
        i++;
	}
	if (nbr >= (long long int)ft_strlen(base))
		i += ft_base(nbr / ft_strlen(base), base);
		i += write(1, &base[nbr % ft_strlen(base)], 1);
	return (i);
}
