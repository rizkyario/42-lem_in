/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchar.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnugroho <rnugroho@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 21:15:43 by rnugroho          #+#    #+#             */
/*   Updated: 2018/02/07 21:15:44 by rnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_WCHAR_H
# define FT_WCHAR_H

# include "libft.h"
# include <wchar.h>

size_t		ft_wstrlen(const wchar_t *wstr);
size_t		ft_wstrconv(char *buff, const wchar_t *wstr);
size_t		ft_wstrnconv(char *buff, const wchar_t *wstr, size_t n);
size_t		ft_widetoa(char *buff, wint_t w);

#endif
