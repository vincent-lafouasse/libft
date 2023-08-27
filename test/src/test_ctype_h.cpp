#include <gtest/gtest.h>
#include <stdlib.h>

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
