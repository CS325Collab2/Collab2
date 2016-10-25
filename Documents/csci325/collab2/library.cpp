#include "library.h"

library::library(){
  list<movie> movieList;
}

library::~library(){

}

void library::push_back(movie insert){
  movieList.push_back(insert);
}

void library::push_front(movie insert){
  movieList.push_front(insert);
}

void library::insert_sorted(movie insert){
  movieList.push_back(insert);
  // movieList.sort();
}

// library::print_helper(movie *current){
//   if(current != NULL){
//     cout << "-->" << current -> title;
//     print_helper(current -> next);
//   }
// }

void library::print(){
  cout << "Movies list: " << endl;
  
  list<movie>::iterator it;
  for(it = movieList.begin(); it != movieList.end(); it++){
    cout << it->title << "-->";
  }
  cout << endl; 
}

void library::remove(string toRemove){

}
