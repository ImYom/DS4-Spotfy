#pragma once
#include <string>


// Controller type detection and button name lookup.
enum class ControllerType
{
    Unknown,
    DS4,        // PlayStation 4 DualShock 
    DS5,        // PlayStation 5 DualSense
    XboxOne,    // Xbox One 
};

// Detect controller type from the SDL joystick name string.
ControllerType DetectControllerType(const char* sdlName);

// Return a human-readable button label for a given controller type and
// SDL joystick button index.
const char* GetButtonName(ControllerType type, int button);

// Return a short display name for the controller type (shown in the UI).
const char* GetControllerTypeName(ControllerType type);