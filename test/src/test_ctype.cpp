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

#include <ctype.h>
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
#define EUR 200

void test_isupper(int c)
{
  EXPECT_EQ(ft_isupper(c), isupper(c));
}

void test_islower(int c)
{
  EXPECT_EQ(ft_islower(c), islower(c));
}

void test_isspace(int c)
{
  EXPECT_EQ(ft_isspace(c), isspace(c));
}

void test_isalpha(int c)
{
  EXPECT_EQ(ft_isalpha(c), isalpha(c));
}

void test_isdigit(int c)
{
  EXPECT_EQ(ft_isdigit(c), isdigit(c));
}

void test_isalnum(int c)
{
  EXPECT_EQ(ft_isalnum(c), isalnum(c));
}

void test_isascii(int c)
{
  EXPECT_EQ(ft_isascii(c), isascii(c));
}

void test_isprint(int c)
{
  EXPECT_EQ(ft_isprint(c), isprint(c));
}

// Poss extension ----------------------

TEST(Ctype, IsUpper)
{
  test_isupper('B');
  test_isupper('O');
  test_isupper('N');
  test_isupper('J');
  test_isupper('O');
  test_isupper('U');
  test_isupper('R');

  test_isupper('4');
  test_isupper('2');
  test_isupper('0');
  test_isupper('b');
  test_isupper('o');
  test_isupper('n');
  test_isupper('j');
  test_isupper('o');
  test_isupper('u');
  test_isupper('r');
  test_isupper(EOT);
  test_isupper(BEL);
  test_isupper(ESC);
  test_isupper(DEL);
  test_isupper('\0');

  test_isupper(EOF_);
  test_isupper(EUR);
  test_isupper(420);
}

TEST(Ctype, IsLower)
{
  test_islower('b');
  test_islower('o');
  test_islower('n');
  test_islower('j');
  test_islower('o');
  test_islower('u');
  test_islower('r');

  test_islower('4');
  test_islower('2');
  test_islower('0');
  test_islower('B');
  test_islower('O');
  test_islower('N');
  test_islower('J');
  test_islower('O');
  test_islower('U');
  test_islower('R');
  test_islower(EOT);
  test_islower(BEL);
  test_islower(ESC);
  test_islower(DEL);
  test_islower('\0');

  test_islower(EOF_);
  test_islower(EUR);
  test_islower(420);
}

TEST(Ctype, IsSpace)
{
  test_isspace(' ');
  test_isspace('\r');
  test_isspace('\t');
  test_isspace('\n');
  test_isspace('\v');
  test_isspace('\f');

  test_isspace('4');
  test_isspace('2');
  test_isspace('0');
  test_isspace('B');
  test_isspace('o');
  test_isspace('n');
  test_isspace('j');
  test_isspace('o');
  test_isspace('u');
  test_isspace('r');
  test_isspace('L');
  test_isspace('o');
  test_isspace('l');
  test_isspace(EOT);
  test_isspace(BEL);
  test_isspace(ESC);
  test_isspace(DEL);
  test_isspace('\0');

  test_isspace(EOF_);
  test_isspace(EUR);
  test_isspace(420);
}

// Libc functions -----------------------------------------

TEST(Ctype, IsAlpha)
{
  test_isalpha('B');
  test_isalpha('o');
  test_isalpha('n');
  test_isalpha('j');
  test_isalpha('o');
  test_isalpha('u');
  test_isalpha('r');
  test_isalpha('L');
  test_isalpha('o');
  test_isalpha('l');

  test_isalpha('4');
  test_isalpha('2');
  test_isalpha('0');
  test_isalpha(EOT);
  test_isalpha(BEL);
  test_isalpha(ESC);
  test_isalpha(DEL);
  test_isalpha('\0');

  test_isalpha(EOF_);
  test_isalpha(EUR);
  test_isalpha(420);
}

TEST(Ctype, IsDigit)
{
  test_isdigit('4');
  test_isdigit('2');
  test_isdigit('0');

  test_isdigit('B');
  test_isdigit('o');
  test_isdigit('n');
  test_isdigit('j');
  test_isdigit('o');
  test_isdigit('u');
  test_isdigit('r');
  test_isdigit('L');
  test_isdigit('o');
  test_isdigit('l');
  test_isdigit(EOT);
  test_isdigit(BEL);
  test_isdigit(ESC);
  test_isdigit(DEL);
  test_isdigit('\0');

  test_isdigit(EOF_);
  test_isdigit(EUR);
  test_isdigit(420);
}

TEST(Ctype, IsAlnum)
{
  test_isalnum('4');
  test_isalnum('2');
  test_isalnum('0');
  test_isalnum('B');
  test_isalnum('o');
  test_isalnum('n');
  test_isalnum('j');
  test_isalnum('o');
  test_isalnum('u');
  test_isalnum('r');
  test_isalnum('L');
  test_isalnum('o');
  test_isalnum('l');

  test_isalnum(EOT);
  test_isalnum(BEL);
  test_isalnum(ESC);
  test_isalnum(DEL);
  test_isalnum('\0');

  test_isalnum(EOF_);
  test_isalnum(EUR);
  test_isalnum(420);
}

TEST(Ctype, IsASCII)
{
  test_isascii('4');
  test_isascii('2');
  test_isascii('0');
  test_isascii('B');
  test_isascii('o');
  test_isascii('n');
  test_isascii('j');
  test_isascii('o');
  test_isascii('u');
  test_isascii('r');
  test_isascii('L');
  test_isascii('o');
  test_isascii('l');
  test_isascii(EOT);
  test_isascii(BEL);
  test_isascii(ESC);
  test_isascii(DEL);
  test_isascii('\0');

  test_isascii(EOF_);
  test_isascii(EUR);
  test_isascii(420);
}

TEST(Ctype, IsPrint)
{
  test_isprint('4');
  test_isprint('2');
  test_isprint('0');
  test_isprint('B');
  test_isprint('o');
  test_isprint('n');
  test_isprint('j');
  test_isprint('o');
  test_isprint('u');
  test_isprint('r');
  test_isprint('L');
  test_isprint('o');
  test_isprint('l');

  test_isprint(EOT);
  test_isprint(BEL);
  test_isprint(ESC);
  test_isprint(DEL);
  test_isprint('\0');

  test_isprint(EOF_);
  test_isprint(EUR);
  test_isprint(420);
}
