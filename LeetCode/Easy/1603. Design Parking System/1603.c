typedef struct
{
    int bigSpace;
    int mediumSpace;
    int smallSpace;
} ParkingSystem;


ParkingSystem* parkingSystemCreate(int big, int medium, int small)
{
    ParkingSystem * ps = (ParkingSystem*)malloc(sizeof(ParkingSystem));
    
    ps->bigSpace = big;
    ps->mediumSpace = medium;
    ps->smallSpace = small;
    
    return ps;
}

bool parkingSystemAddCar(ParkingSystem* obj, int carType)
{
    if(carType==1)
    {
        if(obj->bigSpace>0)
        {
            obj->bigSpace--;
            return true;
        }
        else
            return false;
    }
    else if(carType==2)
    {
        if(obj->mediumSpace>0)
        {
            obj->mediumSpace--;
            return true;
        }
        else
            return false;
    }
    else
    {
        if(obj->smallSpace>0)
        {
            obj->smallSpace--;
            return true;
        }
        else
            return false;
    }
    
}

void parkingSystemFree(ParkingSystem* obj)
{
    free(obj);
}