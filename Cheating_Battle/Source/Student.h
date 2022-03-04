//
//  Student.hpp
//  Final Project
//
//  Created by 盧家雯 on 2022/1/7.
//

#ifndef STUDENT_H
#define STUDENT_H
#include <SDL2/SDL.h>
#include <stdio.h>
class Student
{
    public:
        bool loadmedia_movement_player1 () ;
        bool loadmedia_movement_player2 () ;
        bool ifcheat ;
        bool ifraise ;
        void freemedia_Student () ;
};
#endif
