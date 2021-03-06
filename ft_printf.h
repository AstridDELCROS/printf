/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 16:58:16 by adelcros          #+#    #+#             */
/*   Updated: 2019/12/31 15:09:57 by adelcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define BUFFER_SIZE 9
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct	s_conversion
{
	char	flag;
	int		width;
	int		precision;
	char	type;
}				t_conversion;

int				ft_printf(const char *format, ...);
t_conversion	get_conversion(const char *str, t_conversion conv, va_list ap);
int				get_wid(const char *str, t_conversion *conv, va_list ap, int i);
void			get_pre(const char *str, t_conversion *conv, va_list ap, int i);
int				display_precision(t_conversion conv, char *s);
int				display_width(t_conversion conv, char *s);
int				ft_type_c(va_list ap, t_conversion conv);
int				ft_type_s(va_list ap, t_conversion conv);
int				ft_type_percent(t_conversion conv);
int				ft_type_d(va_list ap, t_conversion conv);
int				ft_type_i(va_list ap, t_conversion conv);
int				ft_type_u(va_list ap, t_conversion conv);
int				ft_type_x(va_list ap, t_conversion conv);
int				ft_type_xmaj(va_list ap, t_conversion conv);
int				ft_type_p(va_list ap, t_conversion conv);
int				ft_apply_type(t_conversion conv, va_list ap);
int				ft_convert_c(char c, t_conversion conv);
int				ft_convert_s(va_list ap, t_conversion conv);
int				ft_display_s
					(char *str, t_conversion conv, int count_v, int diff);
int				ft_convert_di(va_list ap, t_conversion conv, char **s);
int				ft_convert_ux(va_list ap, t_conversion conv, char **s);
int				ft_convert_p(va_list ap, t_conversion conv);
int				ft_strlen(const char *str);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_itoa(long long n);
char			*ft_itoa_min(long long n);
char			*ft_itoa_maj(long long n);
int				ft_atoi(const char *str);
#endif
