//
//  main.cpp
//  Inheritence
//
//  Created by Emad Rajeh on 01/02/2020.
//  Copyright © 2020 Emad Rajeh. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Movies.h"
#include "Movie.h"

using namespace std;
//functions prototypes
void add_movie(Movies &movie, string name, string rating, int watched);
void increment_watched(Movies &movie, string name);



void add_movie(Movies &movie, string name, string rating, int watched){
    if (movie.add_movie(name, rating, watched)) {
        cout << name << " added" << "\n";
    }else{
        cout << name << " already exist!" << "\n";
    }
}
void increment_watched(Movies &movie, string name){
    if (movie.increment_watched(name)) {
        cout << name << " watch incremented" << "\n";
    }else{
        cout << name << " not found" << "\n";
    }
}


int main() {
    
    Movies my_movie;
    my_movie.display();

    add_movie(my_movie, "Big", "PG-13", 2);
    add_movie(my_movie, "Star Wars", "PG", 5);
    add_movie(my_movie, "Cinderalla", "PG", 7);

    my_movie.display();

    add_movie(my_movie, "Cinderalla", "PG", 7);
    add_movie(my_movie, "Ice Age", "PG", 12);

    my_movie.display();

    increment_watched(my_movie, "Big");
    increment_watched(my_movie, "Ice Age");

    my_movie.display();
    
    return 0;
}

