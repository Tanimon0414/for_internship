/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atanimot <atanimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 19:01:44 by atanimot          #+#    #+#             */
/*   Updated: 2025/03/28 11:39:28 by atanimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	a;

	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	a = nb;
	while (power > 1)
	{
		a = a * nb;
		power--;
	}
	return (a);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int nb;
// 	int power;
// 	nb = -5;
// 	power = 4;
// 	printf("%d\n", ft_iterative_power(nb, power));
// 	return (0);
// }