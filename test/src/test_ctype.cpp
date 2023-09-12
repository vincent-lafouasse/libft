/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ctype.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:24:35 by poss              #+#    #+#             */
/*   Updated: 2023/08/28 12:07:37 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gtest/gtest.h>

extern "C"
{
#include "libft.h"
};

#define EOF_ -1
#define EOT 0x01
#define BEL 0x07
#define ESC 0x1B
#define DEL 0x7F

TEST(Ctype, IsAlpha)
{
  EXPECT_TRUE(ft_isalpha('B'));
  EXPECT_TRUE(ft_isalpha('o'));
  EXPECT_TRUE(ft_isalpha('n'));
  EXPECT_TRUE(ft_isalpha('j'));
  EXPECT_TRUE(ft_isalpha('o'));
  EXPECT_TRUE(ft_isalpha('u'));
  EXPECT_TRUE(ft_isalpha('r'));
  EXPECT_TRUE(ft_isalpha('L'));
  EXPECT_TRUE(ft_isalpha('o'));
  EXPECT_TRUE(ft_isalpha('l'));

  EXPECT_FALSE(ft_isalpha('4'));
  EXPECT_FALSE(ft_isalpha('2'));
  EXPECT_FALSE(ft_isalpha('0'));
  EXPECT_FALSE(ft_isalpha(EOT));
  EXPECT_FALSE(ft_isalpha(BEL));
  EXPECT_FALSE(ft_isalpha(ESC));
  EXPECT_FALSE(ft_isalpha(DEL));
  EXPECT_FALSE(ft_isalpha('\0'));

  EXPECT_FALSE(ft_isalpha(EOF_));
  EXPECT_FALSE(ft_isalpha(420));
}

TEST(Ctype, IsDigit)
{

  EXPECT_TRUE(ft_isdigit('4'));
  EXPECT_TRUE(ft_isdigit('2'));
  EXPECT_TRUE(ft_isdigit('0'));

  EXPECT_FALSE(ft_isdigit('B'));
  EXPECT_FALSE(ft_isdigit('o'));
  EXPECT_FALSE(ft_isdigit('n'));
  EXPECT_FALSE(ft_isdigit('j'));
  EXPECT_FALSE(ft_isdigit('o'));
  EXPECT_FALSE(ft_isdigit('u'));
  EXPECT_FALSE(ft_isdigit('r'));
  EXPECT_FALSE(ft_isdigit('L'));
  EXPECT_FALSE(ft_isdigit('o'));
  EXPECT_FALSE(ft_isdigit('l'));
  EXPECT_FALSE(ft_isdigit(EOT));
  EXPECT_FALSE(ft_isdigit(BEL));
  EXPECT_FALSE(ft_isdigit(ESC));
  EXPECT_FALSE(ft_isdigit(DEL));
  EXPECT_FALSE(ft_isdigit('\0'));

  EXPECT_FALSE(ft_isdigit(EOF_));
  EXPECT_FALSE(ft_isdigit(420));
}

TEST(Ctype, IsAlnum)
{
  EXPECT_TRUE(ft_isalnum('4'));
  EXPECT_TRUE(ft_isalnum('2'));
  EXPECT_TRUE(ft_isalnum('0'));
  EXPECT_TRUE(ft_isalnum('B'));
  EXPECT_TRUE(ft_isalnum('o'));
  EXPECT_TRUE(ft_isalnum('n'));
  EXPECT_TRUE(ft_isalnum('j'));
  EXPECT_TRUE(ft_isalnum('o'));
  EXPECT_TRUE(ft_isalnum('u'));
  EXPECT_TRUE(ft_isalnum('r'));
  EXPECT_TRUE(ft_isalnum('L'));
  EXPECT_TRUE(ft_isalnum('o'));
  EXPECT_TRUE(ft_isalnum('l'));

  EXPECT_FALSE(ft_isalnum(EOT));
  EXPECT_FALSE(ft_isalnum(BEL));
  EXPECT_FALSE(ft_isalnum(ESC));
  EXPECT_FALSE(ft_isalnum(DEL));
  EXPECT_FALSE(ft_isalnum('\0'));

  EXPECT_FALSE(ft_isalnum(EOF_));
  EXPECT_FALSE(ft_isalnum(420));
}

TEST(Ctype, IsASCII)
{
  EXPECT_TRUE(ft_isascii('4'));
  EXPECT_TRUE(ft_isascii('2'));
  EXPECT_TRUE(ft_isascii('0'));
  EXPECT_TRUE(ft_isascii('B'));
  EXPECT_TRUE(ft_isascii('o'));
  EXPECT_TRUE(ft_isascii('n'));
  EXPECT_TRUE(ft_isascii('j'));
  EXPECT_TRUE(ft_isascii('o'));
  EXPECT_TRUE(ft_isascii('u'));
  EXPECT_TRUE(ft_isascii('r'));
  EXPECT_TRUE(ft_isascii('L'));
  EXPECT_TRUE(ft_isascii('o'));
  EXPECT_TRUE(ft_isascii('l'));
  EXPECT_TRUE(ft_isascii(EOT));
  EXPECT_TRUE(ft_isascii(BEL));
  EXPECT_TRUE(ft_isascii(ESC));
  EXPECT_TRUE(ft_isascii(DEL));
  EXPECT_TRUE(ft_isascii('\0'));

  EXPECT_FALSE(ft_isascii(EOF_));
  EXPECT_FALSE(ft_isascii(420));
}

TEST(Ctype, IsPrint)
{
  EXPECT_TRUE(ft_isprint('4'));
  EXPECT_TRUE(ft_isprint('2'));
  EXPECT_TRUE(ft_isprint('0'));
  EXPECT_TRUE(ft_isprint('B'));
  EXPECT_TRUE(ft_isprint('o'));
  EXPECT_TRUE(ft_isprint('n'));
  EXPECT_TRUE(ft_isprint('j'));
  EXPECT_TRUE(ft_isprint('o'));
  EXPECT_TRUE(ft_isprint('u'));
  EXPECT_TRUE(ft_isprint('r'));
  EXPECT_TRUE(ft_isprint('L'));
  EXPECT_TRUE(ft_isprint('o'));
  EXPECT_TRUE(ft_isprint('l'));

  EXPECT_FALSE(ft_isprint(EOT));
  EXPECT_FALSE(ft_isprint(BEL));
  EXPECT_FALSE(ft_isprint(ESC));
  EXPECT_FALSE(ft_isprint(DEL));
  EXPECT_FALSE(ft_isprint('\0'));

  EXPECT_FALSE(ft_isprint(EOF_));
  EXPECT_FALSE(ft_isprint(420));
}

// Poss extension ----------------------

TEST(Ctype, IsUpper)
{
  EXPECT_TRUE(ft_isupper('B'));
  EXPECT_TRUE(ft_isupper('O'));
  EXPECT_TRUE(ft_isupper('N'));
  EXPECT_TRUE(ft_isupper('J'));
  EXPECT_TRUE(ft_isupper('O'));
  EXPECT_TRUE(ft_isupper('U'));
  EXPECT_TRUE(ft_isupper('R'));

  EXPECT_FALSE(ft_isupper('4'));
  EXPECT_FALSE(ft_isupper('2'));
  EXPECT_FALSE(ft_isupper('0'));
  EXPECT_FALSE(ft_isupper('b'));
  EXPECT_FALSE(ft_isupper('o'));
  EXPECT_FALSE(ft_isupper('n'));
  EXPECT_FALSE(ft_isupper('j'));
  EXPECT_FALSE(ft_isupper('o'));
  EXPECT_FALSE(ft_isupper('u'));
  EXPECT_FALSE(ft_isupper('r'));
  EXPECT_FALSE(ft_isupper(EOT));
  EXPECT_FALSE(ft_isupper(BEL));
  EXPECT_FALSE(ft_isupper(ESC));
  EXPECT_FALSE(ft_isupper(DEL));
  EXPECT_FALSE(ft_isupper('\0'));

  EXPECT_FALSE(ft_isupper(EOF_));
  EXPECT_FALSE(ft_isupper(420));
}

TEST(Ctype, IsLower)
{
  EXPECT_TRUE(ft_islower('b'));
  EXPECT_TRUE(ft_islower('o'));
  EXPECT_TRUE(ft_islower('n'));
  EXPECT_TRUE(ft_islower('j'));
  EXPECT_TRUE(ft_islower('o'));
  EXPECT_TRUE(ft_islower('u'));
  EXPECT_TRUE(ft_islower('r'));

  EXPECT_FALSE(ft_islower('4'));
  EXPECT_FALSE(ft_islower('2'));
  EXPECT_FALSE(ft_islower('0'));
  EXPECT_FALSE(ft_islower('B'));
  EXPECT_FALSE(ft_islower('O'));
  EXPECT_FALSE(ft_islower('N'));
  EXPECT_FALSE(ft_islower('J'));
  EXPECT_FALSE(ft_islower('O'));
  EXPECT_FALSE(ft_islower('U'));
  EXPECT_FALSE(ft_islower('R'));
  EXPECT_FALSE(ft_islower(EOT));
  EXPECT_FALSE(ft_islower(BEL));
  EXPECT_FALSE(ft_islower(ESC));
  EXPECT_FALSE(ft_islower(DEL));
  EXPECT_FALSE(ft_islower('\0'));

  EXPECT_FALSE(ft_islower(EOF_));
  EXPECT_FALSE(ft_islower(420));
}

TEST(Ctype, IsSpace)
{
  EXPECT_TRUE(ft_isspace(' '));
  EXPECT_TRUE(ft_isspace('\r'));
  EXPECT_TRUE(ft_isspace('\t'));
  EXPECT_TRUE(ft_isspace('\n'));
  EXPECT_TRUE(ft_isspace('\v'));
  EXPECT_TRUE(ft_isspace('\f'));

  EXPECT_FALSE(ft_isspace('4'));
  EXPECT_FALSE(ft_isspace('2'));
  EXPECT_FALSE(ft_isspace('0'));
  EXPECT_FALSE(ft_isspace('B'));
  EXPECT_FALSE(ft_isspace('o'));
  EXPECT_FALSE(ft_isspace('n'));
  EXPECT_FALSE(ft_isspace('j'));
  EXPECT_FALSE(ft_isspace('o'));
  EXPECT_FALSE(ft_isspace('u'));
  EXPECT_FALSE(ft_isspace('r'));
  EXPECT_FALSE(ft_isspace('L'));
  EXPECT_FALSE(ft_isspace('o'));
  EXPECT_FALSE(ft_isspace('l'));
  EXPECT_FALSE(ft_isspace(EOT));
  EXPECT_FALSE(ft_isspace(BEL));
  EXPECT_FALSE(ft_isspace(ESC));
  EXPECT_FALSE(ft_isspace(DEL));
  EXPECT_FALSE(ft_isspace('\0'));

  EXPECT_FALSE(ft_isspace(EOF_));
  EXPECT_FALSE(ft_isspace(420));
}
