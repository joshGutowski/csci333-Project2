#include "gtest/gtest.h"
#include "../src/Array/Array.h"
#include "../src/Vector/Vector.h"
#include "../src/Sparse/Sparse.h"
#include <string>


TEST(TwoDArrayTest, print) {
  TwoDArray<int>* l = new TwoDArray<int>(5,5,0);
  TwoDArray<double>* d = new TwoDArray<double>(5,5,0);
  TwoDArray<std::string>* s = new TwoDArray<std::string>(5,5,"*");

  l->insert(2,2,7);
  d->insert(2,2,7.7);
  s->insert(2,2,"hello");

  EXPECT_EQ(7, l->access(2,2));
  EXPECT_EQ(7.7, d->access(2,2));
  EXPECT_EQ("hello", s->access(2,2));

  l->print();
  d->print();
  s->print();

  delete l;
  delete d;
  delete s;
}


TEST(TwoDArrayTest, insertAndAccess) {
  TwoDArray<int>* l = new TwoDArray<int>(5,5,0);
  TwoDArray<double>* d = new TwoDArray<double>(5,5,0);
  TwoDArray<std::string>* s = new TwoDArray<std::string>(5,5,"*");

  l->insert(2,2,7);
  d->insert(2,2,7.7);
  s->insert(2,2,"hello");

  EXPECT_EQ(7, l->access(2,2));
  EXPECT_EQ(7.7, d->access(2,2));
  EXPECT_EQ("hello", s->access(2,2));

  delete l;
  delete d;
  delete s;
}

TEST(TwoDArrayTest, remove) {
  TwoDArray<int>* l = new TwoDArray<int>(5,5,0);
  TwoDArray<double>* d = new TwoDArray<double>(5,5,0);
  TwoDArray<std::string>* s = new TwoDArray<std::string>(5,5,"*");

  l->insert(2,2,7);
  d->insert(2,2,7.7);
  s->insert(2,2,"hello");

  EXPECT_EQ(7, l->access(2,2));
  EXPECT_EQ(7.7, d->access(2,2));
  EXPECT_EQ("hello", s->access(2,2));

  l->remove(2,2);
  d->remove(2,2);
  s->remove(2,2);
  
  EXPECT_EQ(0, l->access(2,2));
  EXPECT_EQ(0, d->access(2,2));
  EXPECT_EQ("*", s->access(2,2));

  delete l;
  delete d;
  delete s;
}

TEST(TwoDArrayTest, getNumRows) {
  TwoDArray<int>* l = new TwoDArray<int>(5,5,0);
  TwoDArray<double>* d = new TwoDArray<double>(5,5,0);
  TwoDArray<std::string>* s = new TwoDArray<std::string>(5,5,"*");

  EXPECT_EQ(5, l->getNumRows());
  EXPECT_EQ(5, d->getNumRows());
  EXPECT_EQ(5, s->getNumRows());

  delete l;
  delete d;
  delete s;
}

TEST(TwoDArrayTest, getNumCols) {
  TwoDArray<int>* l = new TwoDArray<int>(5,5,0);
  TwoDArray<double>* d = new TwoDArray<double>(5,5,0);
  TwoDArray<std::string>* s = new TwoDArray<std::string>(5,5,"*");

  EXPECT_EQ(5, l->getNumCols());
  EXPECT_EQ(5, d->getNumCols());
  EXPECT_EQ(5, s->getNumCols());

  delete l;
  delete d;
  delete s;
}


TEST(VectorArrayTest, print) {
  VectorArray<int>* l = new VectorArray<int>(5,5,0);
  VectorArray<double>* d = new VectorArray<double>(5,5,0);
  VectorArray<std::string>* s = new VectorArray<std::string>(5,5,"*");

  l->insert(2,2,7);
  d->insert(2,2,7.7);
  s->insert(2,2,"hello");

  EXPECT_EQ(7, l->access(2,2));
  EXPECT_EQ(7.7, d->access(2,2));
  EXPECT_EQ("hello", s->access(2,2));

  l->print();
  d->print();
  s->print();

  delete l;
  delete d;
  delete s;
}


TEST(VectorArrayTest, insertAndAccess) {
  VectorArray<int>* l = new VectorArray<int>(5,5,0);
  VectorArray<double>* d = new VectorArray<double>(5,5,0);
  VectorArray<std::string>* s = new VectorArray<std::string>(5,5,"*");

  l->insert(2,2,7);
  d->insert(2,2,7.7);
  s->insert(2,2,"hello");

  EXPECT_EQ(7, l->access(2,2));
  EXPECT_EQ(7.7, d->access(2,2));
  EXPECT_EQ("hello", s->access(2,2));

  delete l;
  delete d;
  delete s;
}

TEST(VectorArrayTest, remove) {
  VectorArray<int>* l = new VectorArray<int>(5,5,0);
  VectorArray<double>* d = new VectorArray<double>(5,5,0);
  VectorArray<std::string>* s = new VectorArray<std::string>(5,5,"*");

  l->insert(2,2,7);
  d->insert(2,2,7.7);
  s->insert(2,2,"hello");

  EXPECT_EQ(7, l->access(2,2));
  EXPECT_EQ(7.7, d->access(2,2));
  EXPECT_EQ("hello", s->access(2,2));

  l->remove(2,2);
  d->remove(2,2);
  s->remove(2,2);
  
  EXPECT_EQ(0, l->access(2,2));
  EXPECT_EQ(0, d->access(2,2));
  EXPECT_EQ("*", s->access(2,2));

  delete l;
  delete d;
  delete s;
}

TEST(VectorArrayTest, getNumRows) {
  VectorArray<int>* l = new VectorArray<int>(5,5,0);
  VectorArray<double>* d = new VectorArray<double>(5,5,0);
  VectorArray<std::string>* s = new VectorArray<std::string>(5,5,"*");

  EXPECT_EQ(5, l->getNumRows());
  EXPECT_EQ(5, d->getNumRows());
  EXPECT_EQ(5, s->getNumRows());

  delete l;
  delete d;
  delete s;
}

TEST(VectorArrayTest, getNumCols) {
  VectorArray<int>* l = new VectorArray<int>(5,5,0);
  VectorArray<double>* d = new VectorArray<double>(5,5,0);
  VectorArray<std::string>* s = new VectorArray<std::string>(5,5,"*");

  EXPECT_EQ(5, l->getNumCols());
  EXPECT_EQ(5, d->getNumCols());
  EXPECT_EQ(5, s->getNumCols());

  delete l;
  delete d;
  delete s;
  }

TEST(SparseTest, print) {
  Sparse<int>* l = new Sparse<int>(5,5,0);
  Sparse<double>* d = new Sparse<double>(5,5,0);
  Sparse<std::string>* s = new Sparse<std::string>(5,5,"*");

  l->insert(2,2,1);
  l->insert(2,2,7);
  d->insert(2,2,7.7);
  s->insert(2,2,"hello");

  EXPECT_EQ(7, l->access(2,2));
  EXPECT_EQ(7.7, d->access(2,2));
  EXPECT_EQ("hello", s->access(2,2));

  l->print();
  d->print();
  s->print();

  delete l;
  delete d;
  delete s;
}


TEST(SparseTest, insertAndAccess) {
  Sparse<int>* l = new Sparse<int>(5,5,0);
  Sparse<double>* d = new Sparse<double>(5,5,0);
  Sparse<std::string>* s = new Sparse<std::string>(5,5,"*");

  l->insert(2,2,7);
  d->insert(2,2,7.7);
  s->insert(2,2,"hello");

  EXPECT_EQ(7, l->access(2,2));
  EXPECT_EQ(7.7, d->access(2,2));
  EXPECT_EQ("hello", s->access(2,2));

  delete l;
  delete d;
  delete s;
}

TEST(SparseTest, remove) {
  Sparse<int>* l = new Sparse<int>(5,5,0);
  Sparse<double>* d = new Sparse<double>(5,5,0);
  Sparse<std::string>* s = new Sparse<std::string>(5,5,"*");

  l->insert(2,2,8);
  l->insert(2,2,7);
  d->insert(2,2,7.7);
  s->insert(2,2,"hello");

  EXPECT_EQ(7, l->access(2,2));
  EXPECT_EQ(7.7, d->access(2,2));
  EXPECT_EQ("hello", s->access(2,2));

  l->remove(2,2);
  d->remove(2,2);
  s->remove(2,2);
  
  EXPECT_EQ(0, l->access(2,2));
  EXPECT_EQ(0, d->access(2,2));
  EXPECT_EQ("*", s->access(2,2));

  delete l;
  delete d;
  delete s;
  }

TEST(SparseTest, getNumRows) {
  Sparse<int>* l = new Sparse<int>(5,5,0);
  Sparse<double>* d = new Sparse<double>(5,5,0);
  Sparse<std::string>* s = new Sparse<std::string>(5,5,"*");

  EXPECT_EQ(5, l->getNumRows());
  EXPECT_EQ(5, d->getNumRows());
  EXPECT_EQ(5, s->getNumRows());

  delete l;
  delete d;
  delete s;
}

TEST(SparseTest, getNumCols) {
  Sparse<int>* l = new Sparse<int>(5,5,0);
  Sparse<double>* d = new Sparse<double>(5,5,0);
  Sparse<std::string>* s = new Sparse<std::string>(5,5,"*");

  EXPECT_EQ(5, l->getNumCols());
  EXPECT_EQ(5, d->getNumCols());
  EXPECT_EQ(5, s->getNumCols());

  delete l;
  delete d;
  delete s;
}

