/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atanimot <atanimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 19:05:22 by atanimot          #+#    #+#             */
/*   Updated: 2025/03/28 11:45:55 by atanimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
// #include <stdio.h>

// int	main(void)
// {
// 	int nb;
// 	int power;
// 	nb = -5;
// 	power = 4;
// 	printf("%d\n", ft_recursive_power(nb, power));
// 	return (0);
// }