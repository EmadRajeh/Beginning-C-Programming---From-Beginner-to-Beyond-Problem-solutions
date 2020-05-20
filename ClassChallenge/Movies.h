//
//  Movies.hpp
//  Inheritence
//
//  Created by Emad Rajeh on 20/05/2020.
//  Copyright © 2020 Emad Rajeh. All rights reserved.
//

#ifndef Movies_h
#define Movies_h

#include <string>
#include <vector>
#include "Movie.h"

class Movies{
private:
    std::vector<Movie> movies;
public:
    //constr.
    Movies();
    //Deconstr.
    ~Movies();
    
    //methods
    bool add_movie(std::string name, std::string rating, int watched);
    bool increment_watched(std::string name);
    void display()const;
    
};

#endif /* Movies_h */
