#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include <QList>

class PriorityElement;
class GraphicElement;

class PriorityQueue {
public:
  PriorityQueue(QVector<GraphicElement *> elements);
  PriorityQueue(QVector<PriorityElement *> elements);
  ~PriorityQueue();

  QList <PriorityElement * >list;
  PriorityElement *pop();
  int size();
  bool isEmpty();
  void print();
  void build();
  private:
  int parent(int i);
  int left(int i);
  int right(int i);
  int redo(int l, int r);
  void maxHeapify(int l, int r);
};

#endif // PRIORITYQUEUE_H