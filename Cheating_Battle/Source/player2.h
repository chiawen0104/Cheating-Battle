//
//  player2.hpp
//  Final Project
//
//  Created by 盧家雯 on 2022/1/8.
//

#ifndef PLAYERTWO
#define PLAYERTWO
#include "Student.h"
#include <SDL2/SDL.h>

class player2 : public Student
{
    private:

    int pos_stu_x ;
    int pos_stu_y ;
    int pos_note_x ;
    int pos_note_y ;
    //int pos_raise_x;
    //int pos_raise_y;


    protected:

    public:

    player2();
    void setpos();
    void handleEvent() ;
//    bool ifcheat ;
//    bool ifraise ;

};
#endif
