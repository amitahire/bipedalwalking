#include<Physics/AbstractRBEngine.h>
#include<Physics/ArticulatedFigure.h>
#include<Physics/ODEWorld.h>
#include<iostream>
#include <GLUtils/OBJReader.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{

    std::cout<<"start progream"<<std::endl;

   AbstractRBEngine* world=new ODEWorld();
    std::cout<<"create new world"<<std::endl;

    printf(" hello,world %s\n","100");
    fflush(stdout);
    char *p="000;";
    printf(" hello, world %s\n",p);
    fflush(stdout);

    char buffer[256];



     std::cout<<"reading characters"<<std::endl;
     //OBJReader::loadOBJFile("../data/models/bigBird/torso.obj");

    world->loadRBsFromFile("../data/characters/bigBird.rbs");

    std::cout<<"reading characters"<<std::endl;
    world->drawRBs(0);
  //  af->loadFromFile(fp,world);

    return 0;
}

