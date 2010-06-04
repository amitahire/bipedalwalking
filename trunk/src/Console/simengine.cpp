#include<Physics/AbstractRBEngine.h>
#include<Physics/ArticulatedFigure.h>
#include<Physics/ODEWorld.h>
#include<iostream>
#include <GLUtils/OBJReader.h>

#include "simengine.h"

AbstractRBEngine* SimEngine::world=NULL;

SimEngine::SimEngine()
{
}
void SimEngine::Initilize()
{
   std::cout<<"start progream"<<std::endl;
   SimEngine::world=new ODEWorld();
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


}
void SimEngine::Paint()
{
    SimEngine::world->drawRBs(0);

}
