#include<Physics/AbstractRBEngine.h>
#include<Physics/ArticulatedFigure.h>
#include<Physics/ODEWorld.h>
#include<iostream>
#include <GLUtils/OBJReader.h>
#include <stdio.h>
#include <stdlib.h>
#include "simengine.h"
int main()
{

   SimEngine::Initilize();
    std::cout<<"reading characters"<<std::endl;
   SimEngine::Paint();
  //  af->loadFromFile(fp,world);

    return 0;
}

