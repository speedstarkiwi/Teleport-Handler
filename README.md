# Teleport-Handler

When you teleport, roblox fires an event called `OnTeleportEvent`, which restarts lua state.

For example, you are playing and the ls is `0x50`, but suddenly, the game **teleports** you.

Now, the ls is `0x90`, but your old pointer still thinks it's `0x50`, therefore crashes.

This code was meant to keep the handler in check so it won't break during teleportation.

# Usage

```cpp
lua_setfield((lua_State*)rL, LUA_GLOBALSINDEX, "checked_on_teleport");
//i dont know what your registeration looks like, but this is mine
// you want to REGISTER the function into your lua environment
```

You must make an auto script launcher, and execute the script that is in the `launch.lua!`
