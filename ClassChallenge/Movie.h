//
//  Movie.hpp
//  Inheritence
//
//  Created by Emad Rajeh on 20/05/2020.
//  Copyright © 2020 Emad Rajeh. All rights reserved.
//

#ifndef Movie_h
#define Movie_h

#include <stdio.h>
#include <string>

class Movie{
private:
    //friend class Movies;
    //class attributes
    std::string name;
    std::string rating;
    int watched;
public:
    //delegating constr.
    Movie(std::string name, std::string rating, int watched);
    //copy constr.
    Movie(const Movie &source);
    //Deconstr.
    ~Movie();
    
    //Getters & setters for class attributes
    void set_name(std::string name){this-> name = name;}
    std::string get_name() const {return name;}
    
    void set_rating(std::string rating){this->rating = rating;}
    std::string get_rating()const{return rating;}
    
    void set_watched(int watched){this->watched = watched;}
    int get_watched()const{return watched;}
    
    //methods
    void increment_watched(){++watched;}
    void display()const;
    
    
    
};



#endif /* Movie_hpp */
