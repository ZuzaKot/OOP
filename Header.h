#pragma once

class Window
{
public:
    Window(const Window&);            // Declare copy constructor.
    Window& operator=(const Window& x); // Declare copy assignment.
    // ...
};