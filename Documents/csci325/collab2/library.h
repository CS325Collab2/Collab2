
#ifndef LIBRARY_H
#define LIBRARY_H

#include "movie.h"
#include <list>

class library{
 private:
  list<movie> movieList;
  //void print_helper(movie *current);
 public:
  library();
  ~library();
  void readFromFile(string file);
  void writeToFile(string file);
  void insert_sorted(movie insert);
  void find_movie(string search);
  void director_search(string directorSearch);
  void remove(string toRemove);
  void push_back(movie insert);
  void push_front(movie insert);
  void print();
  
};

#endif //library.h
