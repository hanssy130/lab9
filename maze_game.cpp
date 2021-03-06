//
// Created by Justin and Hans on 11/19/2020.
//

#include "maze_game.hpp"

// Creates maze with 2 rooms, 8 walls, and 1 door between both rooms.
maze *maze_game::create_maze(maze_factory *mazeFactory) {
    maze* maze;
    maze = mazeFactory->make_maze();

    wall* wall = mazeFactory->make_wall();

    room* firstRoom = mazeFactory->make_room(0, wall);
    room* secondRoom = mazeFactory->make_room(1, wall);

    door* door = mazeFactory->make_door(firstRoom, secondRoom);

    maze->addDoor(door);
    maze->addRoom(firstRoom);
    maze->addRoom(secondRoom);

    return maze;
}
