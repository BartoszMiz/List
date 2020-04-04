#include <gtest/gtest.h>
#include "List.hpp"

using namespace ::testing;

TEST(ListTest, SizeReturns0WhenEmpty)
{
    List<int> l;
    ASSERT_EQ(l.size(), 0);
}

TEST(ListTest, SizeReturnsCorrectSize)
{
    List<int> l = List<int>();
    l.push_back(10);
    ASSERT_EQ(l.size(), 1);

    l.push_back(20);
    l.push_back(10);
    l.push_back(10);
    ASSERT_EQ(l.size(), 4);

    l.push_back(2141314);
    ASSERT_EQ(l.size(), 5);
}
