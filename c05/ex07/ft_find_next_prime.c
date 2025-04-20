/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atanimot <atanimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 11:00:44 by atanimot          #+#    #+#             */
/*   Updated: 2025/03/28 15:32:18 by atanimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	long	i;

	if (nb <= 1)
		return (2);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (nb);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int nb;
// 	nb = 214748364;
// 	printf("%d\n", ft_find_next_prime(nb));
// 	return (0);
// }