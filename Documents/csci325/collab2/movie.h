#ifndef MOVIE_H
#define MOVIE_H

#include<string>
#include<list>
#include<iostream>
#include<fstream>

using namespace std;

class movie{
 public:
  movie(string movieTitle, string directorName, int time,
	string movieFormat, float moviePrice, int movieYear);
  string title;
  string director;
  int runtime;
  string format;
  float price;
  int year;
};

#endif //movie.h
