#include "gtest/gtest.h"
#include "../src/AQueue/Aqueue.h"
#include "../src/LQueue/Lqueue.h"
#include "../src/LLQueue/LLqueue.h"

TEST(AQueueTest, unitTest) {
  AQueue* s = new AQueue();
  EXPECT_TRUE(s->isEmpty());
  s->enqueue(5);
  EXPECT_EQ(1, s->size());
  EXPECT_EQ(5, s->dequeue());
  EXPECT_TRUE(s->isEmpty());
  delete s;
}

TEST(AQueueTest, enqueueOver) {
  AQueue* s = new AQueue(2);
  EXPECT_TRUE(s->isEmpty());
  s->enqueue(1);
  s->enqueue(2);
  EXPECT_EQ(2, s->size());
  EXPECT_EQ(1, s->dequeue());
  EXPECT_EQ(2, s->dequeue());
  for(int i=0; i<100; i++) {
    s->enqueue(i);
  }
  EXPECT_EQ(100, s->size());
  for(int i=0; i<90; i++){
    s->dequeue();
  }
  EXPECT_EQ(10, s->size());
  delete s;
}

TEST(LQueueTest, unitTest) {
  LQueue* s = new LQueue();
  EXPECT_TRUE(s->isEmpty());
  s->enqueue(1);
  s->enqueue(2);
  EXPECT_EQ(2, s->size());
  EXPECT_EQ(1, s->dequeue());
  EXPECT_EQ(2, s->dequeue());
  EXPECT_TRUE(s->isEmpty());
  delete s;
}

/*TEST(LLQueueTest, unitTest) {
  LLQueue* s = new LLQueue();
  EXPECT_TRUE(s->isEmpty());
  s->enqueue(1);
  s->enqueue(2);
  EXPECT_EQ(2, s->size());
  EXPECT_EQ(1, s->dequeue());
  EXPECT_EQ(2, s->dequeue());
  EXPECT_TRUE(s->isEmpty());
}
*/
