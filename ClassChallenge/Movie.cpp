//
//  Movie.cpp
//  Inheritence
//
//  Created by Emad Rajeh on 20/05/2020.
//  Copyright © 2020 Emad Rajeh. All rights reserved.
//

#include "Movie.h"
#include <iostream>

//implementing constr.
Movie::Movie(std::string name, std::string rating, int watched)
    :name(name), rating(rating), watched(watched){
    
}

//implementing copy constr.
Movie::Movie(const Movie &source)
    :Movie{source.name, source.rating, source.watched}{
    
}
//implementing deconstr.
Movie::~Movie(){
    
}
void Movie::display()const{
    std::cout << name << ", " << rating << ", " << watched << "\n";
}
