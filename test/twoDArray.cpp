#include "gtest/gtest.h"
#include "../src/Array/Array.h"
#include <string>


TEST(TwoDArrayTest, ints) {
  TwoDArray<int>* ints = new TwoDArray<int>(5,5,0);
  ints->insert(2,2,7);
  EXPECT_EQ(7, ints->access(2,2));
  ints->insert(3,3,10);
  EXPECT_EQ(10, ints->access(3,3));
  ints->remove(3,3);
  EXPECT_EQ(0, ints->access(3,3));
  ints->insert(1,1,1);
  ints->insert(2,2,2);
  ints->insert(3,3,3);
  ints->print();
  EXPECT_EQ(5, ints->getNumRows());
  EXPECT_EQ(5, ints->getNumCols());
  delete ints;
}

TEST(TwoDArrayTest, doubles) {
  TwoDArray<double>* d = new TwoDArray<double>(5,5,5.5);
  d->insert(2,2,7.7);
  EXPECT_EQ(7.7, d->access(2,2));
  d->insert(3,3,10.10);
  EXPECT_EQ(10.10, d->access(3,3));
  d->remove(3,3);
  EXPECT_EQ(5.5, d->access(3,3));
  d->insert(1,1,1.1);
  d->insert(2,2,2.2);
  d->insert(3,3,3.3);
  d->print();
  EXPECT_EQ(5, d->getNumRows());
  EXPECT_EQ(5, d->getNumCols());
  delete d;
}

TEST(TwoDArrayTest, strings) {
  TwoDArray<std::string>* s = new TwoDArray<std::string>(5,5,"*");
  s->insert(2,2,"hello");
  EXPECT_EQ("hello", s->access(2,2));
  s->insert(3,3,"world");
  EXPECT_EQ("world", s->access(3,3));
  s->remove(3,3);
  EXPECT_EQ("*", s->access(3,3));
  s->insert(1,1,"moo");
  s->insert(2,2,"cow");
  s->insert(3,3,"brown");
  EXPECT_EQ("brown", s->access(3,3));
  s->print();
  EXPECT_EQ(5, s->getNumRows());
  EXPECT_EQ(5, s->getNumCols());
  delete s;
}
