#include<Physics/AbstractRBEngine.h>
#include<Physics/ArticulatedFigure.h>
#include<Physics/ODEWorld.h>
#include<iostream>

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
    FILE* fp=fopen("/home/fliu/bipedCon/release/src/data/characters","r");
    while(!feof(fp))
    {
        fgets(buffer,256,fp);
        char*line=lTrim(buffer);
        printf(" the line is : %s\n",line);
        fflush(stdout);


    }

   // world->loadRBsFromFile("/home/fliu/bipedCon/release/src/data/characters");

    std::cout<<"reading characters"<<std::endl;
   // world->drawRBs(0);
  //  af->loadFromFile(fp,world);

    return 1;
}

