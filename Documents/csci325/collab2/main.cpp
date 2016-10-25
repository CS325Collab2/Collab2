#include "library.h"

int main() {

  library listofMovies;
  movie newMovie("The Ring", "Gore Verbinski", 145, "DVD", 3.98, 2002);
  movie movie2("The Birds", "Alfred Hitchcock", 120, "Digital", 1, 1963);
  movie movie3("The Giver", "Phillip Noyce", 97, "DVD", 4.50, 2014);
  
  listofMovies.push_back(newMovie);
  listofMovies.push_front(movie2);
  listofMovies.insert_sorted(movie3);
  listofMovies.print();
  
  return 0; 
}
