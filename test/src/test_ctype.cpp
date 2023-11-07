/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ctype.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:24:35 by poss              #+#    #+#             */
/*   Updated: 2023/11/07 17:03:08 by vlafouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <gtest/gtest.h>

extern "C"
{
#include "libft.h"
};

#define LOWER_BOUND -1
#define UPPER_BOUND 255

void test_isupper(int c)
{
  EXPECT_EQ((bool)ft_isupper(c),(bool)isupper(c))
      << "\terror found with the character " << char(c) << " i.e. ASCII " << c;
}

void test_islower(int c)
{
  EXPECT_EQ((bool)ft_islower(c),(bool)islower(c))
      << "\terror found with the character " << char(c) << " i.e. ASCII " << c;
}

void test_isspace(int c)
{
  EXPECT_EQ((bool)ft_isspace(c),(bool)isspace(c))
      << "\terror found with the character " << char(c) << " i.e. ASCII " << c;
}

void test_isalpha(int c)
{
  EXPECT_EQ((bool)ft_isalpha(c),(bool)isalpha(c))
      << "\terror found with the character " << char(c) << " i.e. ASCII " << c;
}

void test_isdigit(int c)
{
  EXPECT_EQ((bool)ft_isdigit(c),(bool)isdigit(c))
      << "\terror found with the character " << char(c) << " i.e. ASCII " << c;
}

void test_isalnum(int c)
{
  EXPECT_EQ((bool)ft_isalnum(c),(bool)isalnum(c))
      << "\terror found with the character " << char(c) << " i.e. ASCII " << c;
}

void test_isascii(int c)
{
  EXPECT_EQ((bool)ft_isascii(c),(bool)isascii(c))
      << "\terror found with the character " << char(c) << " i.e. ASCII " << c;
}

void test_isprint(int c)
{
  EXPECT_EQ((bool)ft_isprint(c),(bool)isprint(c))
      << "\terror found with the character " << char(c) << " i.e. ASCII " << c;
}

void test_tolower(int c)
{
  EXPECT_EQ((bool)ft_tolower(c),(bool)tolower(c))
      << "\terror found with the character " << char(c) << " i.e. ASCII " << c;
}

void test_toupper(int c)
{
  EXPECT_EQ((bool)ft_toupper(c),(bool)toupper(c))
      << "\terror found with the character " << char(c) << " i.e. ASCII " << c;
}

// Libc functions -----------------------------------------

TEST(Ctype, IsAlpha)
{
  for (int c = LOWER_BOUND; c < UPPER_BOUND; c++)
    test_isalpha(c);
}

TEST(Ctype, IsDigit)
{
  for (int c = LOWER_BOUND; c < UPPER_BOUND; c++)
    test_isdigit(c);
}

TEST(Ctype, IsAlnum)
{
  for (int c = LOWER_BOUND; c < UPPER_BOUND; c++)
    test_isalnum(c);
}

TEST(Ctype, IsASCII)
{
  for (int c = LOWER_BOUND; c < UPPER_BOUND; c++)
    test_isascii(c);
}

TEST(Ctype, IsPrint)
{
  for (int c = LOWER_BOUND; c < UPPER_BOUND; c++)
    test_isprint(c);
}

TEST(Ctype, ToUpper)
{
  for (int c = LOWER_BOUND; c < UPPER_BOUND; c++)
    test_toupper(c);
}

TEST(Ctype, ToLower)
{
  for (int c = LOWER_BOUND; c < UPPER_BOUND; c++)
    test_tolower(c);
}

// Poss extension ----------------------

TEST(Ctype, IsUpper)
{
  for (int c = LOWER_BOUND; c < UPPER_BOUND; c++)
    test_isupper(c);
}

TEST(Ctype, IsLower)
{
  for (int c = LOWER_BOUND; c < UPPER_BOUND; c++)
    test_islower(c);
}

TEST(Ctype, IsSpace)
{
  for (int c = LOWER_BOUND; c < UPPER_BOUND; c++)
    test_isspace(c);
}
