/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:24:18 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/17 12:24:29 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_BOOLEAN_H__
# define __FT_BOOLEAN_H__

int	write(int n, void *str,unsigned int size);

#define TRUE 1
#define FALSE 0
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define SUCCESS 0
#define EVEN(nbr) (nbr % 2 == 0)
#define t_bool int;

#endif
