/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_diu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 21:43:20 by adelcros          #+#    #+#             */
/*   Updated: 2019/12/29 18:09:15 by adelcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_type_d(va_list ap, t_conversion conv)
{
	ft_apply_width_di(ap, conv);
}

void	ft_type_i(va_list ap, t_conversion conv)
{
	ft_apply_width_di(ap, conv);
}

void	ft_type_u(va_list ap, t_conversion conv)
{
	ft_apply_width_uxX(ap, conv);
}

