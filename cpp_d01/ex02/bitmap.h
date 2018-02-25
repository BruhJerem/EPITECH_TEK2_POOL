/*
** EPITECH PROJECT, 2018
** bitestruct
** File description:
** bitestruct
*/

#ifndef _BITMAP_H_
# define _BITMAP_H_

typedef struct		bmp_header_s
{
	int16_t	magic;
	int			position;
	int			cycle;
	int			carry;
	int			reg[REG_NUMBER];
	struct s_head		*next;
}				bmp_header_t;

typedef struct		bmp_info_header_t
{
	struct s_champ	*champ;
	int			position;
	int			cycle;
	int			carry;
	int			reg[REG_NUMBER];
	struct s_head		*next;
}				bmp_info_header_t;
