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

TEST(Ctype, IsSpace)
{
  EXPECT_TRUE(ft_isspace(' '));
  EXPECT_TRUE(ft_isspace('\r'));
  EXPECT_TRUE(ft_isspace('\t'));
  EXPECT_TRUE(ft_isspace('\n'));
  EXPECT_TRUE(ft_isspace('\v'));
  EXPECT_TRUE(ft_isspace('\f'));

  EXPECT_FALSE(ft_isspace('\0'));
  EXPECT_FALSE(ft_isspace('\a'));
  EXPECT_FALSE(ft_isspace('\b'));
  EXPECT_FALSE(ft_isspace('4'));
  EXPECT_FALSE(ft_isspace('2'));
  EXPECT_FALSE(ft_isspace('0'));
  EXPECT_FALSE(ft_isspace('m'));
  EXPECT_FALSE(ft_isspace('d'));
  EXPECT_FALSE(ft_isspace('r'));

  EXPECT_FALSE(ft_isspace(-1));
  EXPECT_FALSE(ft_isspace(127));
  EXPECT_FALSE(ft_isspace(255));
}

TEST(Ctype, IsDigit)
{
  EXPECT_TRUE(ft_isdigit('4'));
  EXPECT_TRUE(ft_isdigit('2'));
  EXPECT_TRUE(ft_isdigit('0'));

  EXPECT_FALSE(ft_isdigit('m'));
  EXPECT_FALSE(ft_isdigit('d'));
  EXPECT_FALSE(ft_isdigit('r'));
  EXPECT_FALSE(ft_isdigit('\0'));

  EXPECT_FALSE(ft_isdigit(-1));
  EXPECT_FALSE(ft_isdigit(127));
  EXPECT_FALSE(ft_isdigit(255));
}
