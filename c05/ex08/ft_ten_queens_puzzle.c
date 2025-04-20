/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atanimot <atanimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:30:03 by atanimot          #+#    #+#             */
/*   Updated: 2025/03/31 16:27:18 by atanimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putsolution(int *queens)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = queens[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_is_safe(int *queens, int col, int row)
{
	int	i;
	int	diff;

	i = 0;
	while (i < col)
	{
		if (queens[i] == row)
			return (0);
		diff = col - i;
		if (queens[i] - row == diff || row - queens[i] == diff)
			return (0);
		i++;
	}
	return (1);
}

void	ft_solve(int col, int *queens, int *count)
{
	int	row;

	if (col == 10)
	{
		ft_putsolution(queens);
		(*count)++;
		return ;
	}
	row = 0;
	while (row < 10)
	{
		if (ft_is_safe(queens, col, row))
		{
			queens[col] = row;
			ft_solve(col + 1, queens, count);
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	queens[10];
	int	count;

	count = 0;
	ft_solve(0, queens, &count);
	return (count);
}

// int	main(void)
// {
// 	int		count;
// 	char	buffer[12];
// 	int		i;
// 	int		j;
// 	int		temp;
// 		char temp_buf[12];
// 	int		k;

// 	count = ft_ten_queens_puzzle();
// 	i = 0;
// 	if (count == 0)
// 		buffer[i++] = '0';
// 	else
// 	{
// 		temp = count;
// 		k = 0;
// 		while (temp > 0)
// 		{
// 			temp_buf[k++] = (temp % 10) + '0';
// 			temp /= 10;
// 		}
// 		j = k - 1;
// 		while (j >= 0)
// 			buffer[i++] = temp_buf[j--];
// 	}
// 	buffer[i++] = '\n';
// 	write(1, buffer, i);
// 	return (0);
// }
