/*
You have to put your DLLMAIN code!
However your DLL thread attaches, call it here!
*/

int checked_on_tp(uintptr_t rl)
{
    //however your dll thread attaches
    //please credit it would be nice
    //THERE ARE WAY BETTER WAYS OF DOING THIS
    //DO NOT RELY ON THIS FOREVER, INSTEAD USE OFFSETS!!
    lua_pushboolean((lua_State*)rl, true);//what are you pushing true for, speed?
    /*
     getglobal game
     getfield -1 GetService
     pushvalue -2
     pushstring Players
     pcall 2 1 0
     getfield -1 LocalPlayer
     getfield -1 OnTeleport
     getfield -1 Connect 
     pushvalue -2
     pcall 2 1 0
    */
    return 1;
}
