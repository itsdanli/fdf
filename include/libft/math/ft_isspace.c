/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfelty <jfelty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 17:04:55 by jfelty            #+#    #+#             */
/*   Updated: 2019/11/13 11:23:31 by danli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == ' ' ||
	c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}
