/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:06:50 by atanimot          #+#    #+#             */
/*   Updated: 2025/04/08 22:40:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	a;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	i = 1;
	a = nb;
	while (nb - i >= 1)
	{
		a = a * (nb - i);
		i++;
	}
	return (a);
}
#include <stdio.h>

int	main(void)
{
	int nb;
	nb = 5;
	printf("%d\n", ft_iterative_factorial(nb));
	return (0);
}