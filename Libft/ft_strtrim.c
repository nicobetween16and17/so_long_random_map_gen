/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niespana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:14:31 by niespana          #+#    #+#             */
/*   Updated: 2022/04/05 11:14:32 by niespana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_set(char const c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	char			*trim;
	size_t			end;

	if (!s1)
		return (0);
	start = 0;
	while (s1[start] && ft_is_set(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (ft_is_set(s1[end], set))
	{
		end--;
	}
	trim = ft_substr(s1, start, end - start + 1);
	if (!trim)
		return (0);
	return (trim);
}
/*
#include <stdio.h>
int main()
{
	printf("%lu\n", (ft_strlen(s1) - i + 1));
	printf("%s\n", ft_strtrim("   xxxtripouille", " x"));
}*/
