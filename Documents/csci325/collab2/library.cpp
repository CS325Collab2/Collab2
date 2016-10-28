#include "library.h"

library::library(){
  
}

library::~library(){
  
}

void library::readFromFile(string file){
  string t;
  string d;
  int r;
  string f;
  float p;
  int y;
  
  cout << "Reading file: " << file << endl;
  ifstream inFile;
  inFile.open(file.c_str());

  getline(inFile, t);
  while(inFile){
    getline(inFile, d);
    inFile >> r;
    inFile >> f;
    inFile >> p;
    inFile >> y;
    inFile.get();

    movie temp(t, d, r, f, p, y );
    insert_sorted(temp);

    getline(inFile,t);
  }
  inFile.close();
}

void library::writeToFile(string file){
  ofstream outFile;
  outFile.open(file.c_str());

  list<movie>::iterator it;
  for(it = movieList.begin(); it != movieList.end(); it++){
    outFile << it -> title << endl;
    outFile << it -> director << endl;
    outFile << it -> runtime << endl;
    outFile << it -> format << endl;
    outFile << it -> price << endl;
    outFile << it -> year << endl;
  }
}

void library::insert_sorted(movie toInsert){
  list<movie>::iterator it = movieList.begin();
  while(it != movieList.end() && toInsert.title > it -> title)
    it++;
  movieList.insert(it, toInsert);
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

void library::push_back(movie insert){
  movieList.push_back(insert);
}

void library::push_front(movie insert){
  movieList.push_front(insert);
}

void library::print(){
  cout << "Movie list: " << endl;
  
  list<movie>::iterator it;
  for(it = movieList.begin(); it != movieList.end(); it++){
    cout << it -> title << endl;
    cout << it -> director << endl;
    cout << it -> runtime << endl;
    cout << it -> format << endl;
    cout << it -> price << endl;
    cout << it -> year << endl;
    cout << "\n" << endl;
  }
}

