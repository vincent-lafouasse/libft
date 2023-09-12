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

#define LOWER_BOUND -30
#define UPPER_BOUND 420

void test_isupper(int c)
{
  EXPECT_EQ(ft_isupper(c), isupper(c))
      << "\terror found with the character " << char(c) << " i.e. ASCII " << c;
}

void test_islower(int c)
{
  EXPECT_EQ(ft_islower(c), islower(c))
      << "\terror found with the character " << char(c) << " i.e. ASCII " << c;
}

void test_isspace(int c)
{
  EXPECT_EQ(ft_isspace(c), isspace(c))
      << "\terror found with the character " << char(c) << " i.e. ASCII " << c;
}

void test_isalpha(int c)
{
  EXPECT_EQ(ft_isalpha(c), isalpha(c))
      << "\terror found with the character " << char(c) << " i.e. ASCII " << c;
}

void test_isdigit(int c)
{
  EXPECT_EQ(ft_isdigit(c), isdigit(c))
      << "\terror found with the character " << char(c) << " i.e. ASCII " << c;
}

void test_isalnum(int c)
{
  EXPECT_EQ(ft_isalnum(c), isalnum(c))
      << "\terror found with the character " << char(c) << " i.e. ASCII " << c;
}

void test_isascii(int c)
{
  EXPECT_EQ(ft_isascii(c), isascii(c))
      << "\terror found with the character " << char(c) << " i.e. ASCII " << c;
}

void test_isprint(int c)
{
  EXPECT_EQ(ft_isprint(c), isprint(c))
      << "\terror found with the character " << char(c) << " i.e. ASCII " << c;
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
