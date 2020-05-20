//
//  Movies.cpp
//  Inheritence
//
//  Created by Emad Rajeh on 20/05/2020.
//  Copyright © 2020 Emad Rajeh. All rights reserved.
//

#include "Movies.h"
#include <string>
#include <iostream>

Movies::Movies(){
}
//Deconstr.
Movies::~Movies(){
    
}

bool Movies::add_movie(std::string name, std::string rating, int watched){
    for(const Movie &m : movies){
        if (m.get_name() == name)
//            std::cout << "Movie Already Exist!" << "\n";
            return false;
        
    }
      Movie temp{name, rating, watched};
      movies.push_back(temp);
      return true;
}
bool Movies::increment_watched(std::string name){
    for(Movie &m : movies){
        if (m.get_name() == name) {
            m.increment_watched();
            return true;
        }
    }
    //std::cout << "Movie Already Exist!" << "\n";
    return false;
    
}
void Movies::display()const{
    if(movies.size() == 0){
        std::cout << "Sorry, no movies to display" << "\n";
    }else{
        std::cout << "\n==============================" << "\n";
        for(auto m : movies){
            m.display();
        }
         std::cout << "==============================" << "\n";
    }
    
}
