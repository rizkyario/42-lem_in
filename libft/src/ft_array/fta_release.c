/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fta_release.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnugroho <rnugroho@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 12:09:07 by rnugroho          #+#    #+#             */
/*   Updated: 2018/02/17 11:22:32 by rnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"
#include <stdlib.h>

/*
** Array::release
** -
** If one initialised the array with fta_alloc, they are advised
** to use fta_release to free it.
** Both the underlying data and the array will be freed.
** -
** _ptr_ is the address of a pointer to an array,
** and will be set to NULL to prevent further uses attempts.
*/

void	fta_release(t_array **ptr)
{
	fta_clear(*ptr);
	free(*ptr);
	*ptr = NULL;
}
