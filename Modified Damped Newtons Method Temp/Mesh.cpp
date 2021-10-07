
#include "Mesh.h"


void Mesh::initializeMesh()
{
    // Initialize the size of node/face location matricies
    x.resize(jPoints, 0.0);
    xMinus.resize(jPoints, 0.0);
    xPositive.resize(jPoints, 0.0);

    // Define node location
    for(int j = 0; j< jPoints; j++)
    {
        x[j] =  j * L/(jPoints-1);
    }

    // Define face location
    calculateSurfaceLocation();
}

void Mesh::calculateSurfaceLocation()
{
    for(int j = 0; j< jPoints; j++)
    {
        if (j = 0)
        {
            xMinus[j] =  x[j];
        }
        else if(j = jPoints)
        {
            xPositive[j-1] = x[j-1];
        }
        else
        {
            xMinus[j]      =  (x[j] - x[j-1])*0.5;
            xPositive[j-1] =  (x[j] - x[j-1])*0.5;
        }       
        
    }
}

void Mesh::refineMesh(){}