#include "library.h"

int main() {

  library listofMovies;

  listofMovies.readFromFile("movies.txt");
  movie newMovie("The Ring", "Gore Verbinski", 145, "DVD", 3.98, 2002);
  movie movie2("The Birds", "Alfred Hitchcock", 120, "Digital", 1, 1963);
  movie movie3("The Giver", "Phillip Noyce", 97, "DVD", 4.50, 2014);
  
  listofMovies.push_back(newMovie);
  listofMovies.push_front(movie2);
  listofMovies.push_front(movie3);
  // listofMovies.insert_sorted(movie3);
  //listofMovies.insert_sorted(movie2);
  //  listofMovies.insert_sorted(movie3);
  listofMovies.insert_sorted(newMovie);
  listofMovies.writeToFile("test.txt");
  listofMovies.print();

  // listofMovies.remove("The Birds");

  // cout << "Find movie \"The\"" << endl;
  // listofMovies.find_movie("The");
  // cout << "Find movie \"a\"" << endl;
  // listofMovies.find_movie("a");
  
  // cout << "Director search \"Gore\"" << endl;
  // listofMovies.director_search("Gore");
  // cout << "Director search \"A\"" << endl;
  // listofMovies.director_search("A");
  // cout << "Director search \"a\"" << endl;
  // listofMovies.director_search("a");
  // cout << "Director search \"E\"" << endl;
  // listofMovies.director_search("E");
  // cout << "Director search \"e\"" << endl;
  // listofMovies.director_search("e");
  
  return 0; 
}
