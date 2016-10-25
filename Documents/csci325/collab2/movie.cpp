#include "movie.h"

movie::movie(string movieTitle, string directorName, int time,
	     string movieFormat, float moviePrice, int movieYear){
  title = movieTitle;
  director = directorName;
  runtime  = time;
  format = movieFormat;
  price = moviePrice;
  year = movieYear;
}
