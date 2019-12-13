/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtalaver <gtalaver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 23:02:31 by gtalaver          #+#    #+#             */
/*   Updated: 2019/12/10 14:20:58 by gtalaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns an array of strings obtained by splitting "s" using "c" as delimiter
*/

static int		ft_divcounter(char const *s, char c)
{
	int i;
	int cont;

	i = 0;
	cont = 0;
	if (s[0] && s[0] != c)
		cont++;
	while (i < (int)ft_strlen(s))
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			cont++;
		i++;
	}
	return (cont);
}

static char		*ft_segmentator(char const *s, char c, int i)
{
	int		p;
	int		k;
	char	*w;

	p = i;
	while (s[i] && s[i] != c)
		i++;
	w = (char *)malloc(sizeof(char) * ((i - p) + 1));
	if (!w)
		return (NULL);
	k = 0;
	while (p != i)
	{
		w[k] = s[p];
		k++;
		p++;
	}
	w[k] = '\0';
	return (w);
}

char			**ft_split(char const *s, char delim)
{
	char	**array;
	int		i;
	int		k;

	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (ft_divcounter(s, delim) + 1));
	if (!array)
		return (NULL);
	i = 0;
	k = 0;
	while (i <= (int)ft_strlen(s) && ft_divcounter(s, delim))
	{
		if (ft_strlen(ft_segmentator(s, delim, i)))
		{
			array[k] = ft_segmentator(s, delim, i);
			i += (ft_strlen(array[k]) + 1);
			k++;
		}
		else
			i++;
	}
	array[k] = NULL;
	return (array);
}
