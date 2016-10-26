#include "library.h"

library::library(){
  list<movie> movieList;
}

library::~library(){
  
}

void library::readFromFile(string file){
  
}

void library::writeToFile(string file){
  
}

void library::insert_sorted(movie insert){
  list<movie>::iterator it;
  for(it = movieList.begin(); it != movieList.end(); it++){
    if(insert.title < it -> title){
      movieList.insert(it, insert);
    }
  }
}

void library::find_movie(string search){
  list<movie>::iterator it;
  for(it = movieList.begin(); it != movieList.end(); it++){
    if(it -> title.find(search) != string::npos){
      cout << "Found.\nPrinting Results:  " << endl;
      cout << it -> title << endl;
      cout << it -> director << endl;
      cout << it -> runtime << endl;
      cout << it -> format << endl;
      cout << "$" << it -> price << endl;
      cout << "Release year: " << it -> year << "\n\n" << endl;;
    }
  }
  cout << "No results found.\n\n" << endl;
}

void library::director_search(string directorSearch){
  list<movie>::iterator it;
  for(it = movieList.begin(); it!= movieList.end(); it++){
    if(it -> director.find(directorSearch) != string::npos){
      cout << "Found.\nPrinting Results: " << endl;
      cout << it -> title << endl;
      cout << it -> director << endl;
      cout << it -> runtime << endl;
      cout << it -> format << endl;
      cout << "$" << it -> price << endl;
      cout << "Release year: " << it -> year << "\n\n" << endl;
    }
  }
  cout << "No Results Found.\n\n" << endl;
}

void library::remove(string toRemove){
  list<movie>::iterator it;
  for(it = movieList.begin(); it != movieList.end(); it++){
    if(it -> title.find(toRemove) != string::npos){
      //movieList.erase(it);
    }
  }
}


// library::print_helper(movie *current){
//   if(current != NULL){
//     cout << "-->" << current -> title;
//     print_helper(current -> next);
//   }
// }


void library::push_back(movie insert){
  movieList.push_back(insert);
}

void library::push_front(movie insert){
  movieList.push_front(insert);
}

void library::print(){
  cout << "Movies list: " << endl;
  
  list<movie>::iterator it;
  for(it = movieList.begin(); it != movieList.end(); it++){
    cout << it->title << "-->";
  }
  cout << endl; 
}

