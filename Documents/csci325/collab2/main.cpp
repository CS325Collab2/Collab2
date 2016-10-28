#include "library.h"

using namespace std;

int main() {

  library listofMovies;
  
  cout << "Welcome to your movie library!" << endl;
  cout << "1 Read a library from a file" << endl;
  cout << "2 Write current library to a file" << endl;
  cout << "3 Print current library to the screen" << endl;
  cout << "4 Search for a movie by title" << endl;
  cout << "5 Search for a movie by director's name" << endl;
  cout << "6 Add a new movie to the library" << endl;
  cout << "7 Delete a movie from the library" << endl;
  cout << "8 Exit the program" << endl;

  string input;
  string file;
  
  string title;
  string director;
  int runtime;
  string format;
  float price;
  int year;

  cout << "Enter your choice now: ";
  cin >> input;
  cin.get();

  while(input != "8"){
    if(input == "1"){
      cout << "Enter name of the file to read: ";
      cin >> file;
      cout << "Reading: " << file << endl;
      listofMovies.readFromFile(file);
      cout << "Finished reading: " << file << endl;
    }
    else if(input == "2"){
      cout << "Enter name of the file to write to: ";
      cin >> file;
      cout << "Writing to: " << file << endl;
      listofMovies.writeToFile(file);
      cout << "Finished writing to: " << file << endl;
    }
    else if(input == "3"){
      cout << "Printing current library." << endl;
      listofMovies.print();
      cout << "Finished printing \n" << endl;
    }
    else if(input == "4"){
      cout << "Enter title to search for: ";
      cin >> title;
      listofMovies.find_movie(title);
    }
    else if(input == "5"){
      cout << "Enter director's name to search (search is case-sensitive): ";
      cin >> director;
      listofMovies.director_search(director);
    }
    else if(input == "6"){
      cout << "Enter title of movie to add:";
      getline(cin, title);
      cout << "Enter director's name:";
      getline(cin, director);
      cout << "Enter runtime of movie:";
      cin >> runtime;
      cout << "Enter format of movie:";
      cin >> format;
      cout << "Enter price of movie:";
      cin >> price;
      cout << "Enter release year of movie:";
      cin >> year;
      cin.get();
      
      movie toAdd(title, director, runtime, format, price, year);
      listofMovies.insert_sorted(toAdd);
    }
    else if(input == "7"){
      cout << "Enter title of movie to remove: ";
      cin >> title;

      cout << "Removing " << title << endl;
      listofMovies.remove(title);
    }
    else
      cout << "Invalid Input" << endl;

    cout << "\n\n" << endl;
    cout << "Welcome to your movie library!" << endl;
    cout << "1 Read a library from a file" << endl;
    cout << "2 Write current library to a file" << endl;
    cout << "3 Print current library to the screen" << endl;
    cout << "4 Search for a movie by title" << endl;
    cout << "5 Search for a movie by director's name" << endl;
    cout << "6 Add a new movie to the library" << endl;
    cout << "7 Delete a movie from the library" << endl;
    cout << "8 Exit the program" << endl;


    cout << "Please enter your choice now: ";
    cin >> input;
    cin.get();
    cout << "\n" << endl;
  }
  cout << "Exiting program." << endl;
  return 0; 
}
