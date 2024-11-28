#pragma once

#include "pch.h"
#include "types.h"

struct QueueFamilyIndices
{
    std::optional<u32> graphics_family;
    bool is_complete()
    {
        return graphics_family.has_value();
    }
};