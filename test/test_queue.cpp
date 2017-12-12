#include "..\lab_4_queue\Tqueue.h"

#include "gtest.h"

TEST(Tqueue, can_create_stack_with_positive_length)
{
  ASSERT_NO_THROW(Tqueue<int> st(3));
}

TEST(Tqueue, can_set_top_element)
{
  Tqueue<int> tq(3);
  ASSERT_NO_THROW(tq.push(10));
}

TEST(Tqueue, can_clear_top_element)
{
  Tqueue<int> tq(3);
  tq.push(10);
  ASSERT_NO_THROW(tq.pop());
}

TEST(Tqueue, can_get_top_element)
{
  Tqueue<int> tq(3);
  tq.push(10);
  EXPECT_EQ(10,tq.top());
}

TEST(Tqueue, test_for_empty)
{
  Tqueue<int> tq(3);
  EXPECT_EQ(1,tq.isempty());
  tq.push(10);
	EXPECT_EQ(0,tq.isempty());
}

TEST(Tqueue, test_for_full)
{
  Tqueue<int> tq(3);
  tq.push(10);
	EXPECT_EQ(0,tq.isfull());
	tq.push(11);
	tq.push(12);
  EXPECT_EQ(1,tq.isfull());
}

TEST(Tqueue, throws_when_set_top_element_with_too_large_position)
{
  Tqueue<int> tq(1);
  tq.push(11);
  ASSERT_ANY_THROW(tq.push(12));
}


TEST(Tqueue, throws_when_getting_an_item_from_an_empty_queue_top)
{
  Tqueue<int> tq(1);
  ASSERT_ANY_THROW(tq.top());
}

TEST(Tqueue, throws_when_getting_an_item_from_an_empty_queue_pop)
{
  Tqueue<int> tq(1);
  ASSERT_ANY_THROW(tq.pop());
}


